#include "FStreamed.h"

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void oStreamed(char* fileName, std::string& oContent)
{
	std::string outName = fileName;
	outName += ".replace";
	std::ofstream file(outName.c_str(), std::ios::trunc);
	std::ofstream outFile(outName.c_str());
	if(outFile.is_open())
		outFile << oContent;
	else
		std::cout << outName << " is not open" << std::endl;
}

std::string replaceContent(std::string& iContent, const std::string& c1, const std::string& c2)
{
	int pos = 0;
	int startPos = 0;
	std::string oContent;

	while ( (pos = iContent.find(c1, startPos)) != (int)std::string::npos)
	{
		oContent += iContent.substr(startPos, pos - startPos);
		oContent += c2;
		startPos = pos + c1.length();
	}
	oContent += iContent.substr(startPos);
	return (oContent);
}

std::string getContent(std::ifstream& iFile)
{
	std::ostringstream contentStream;
	contentStream << iFile.rdbuf();
	return (contentStream.str());
}

void iStreamed(char* fileName, const std::string& c1, const std::string& c2)
{
	std::ifstream iFile(fileName);

	if (!iFile.is_open())
	{
		std::cout << fileName << " is not open" << std::endl;
		return ;
	}
	std::string* iContent = new std::string(getContent(iFile));
	iFile.close();
	std::string* oContent = new std::string(replaceContent(*iContent, c1, c2));
	delete iContent;
	oStreamed(fileName, *oContent);
	delete oContent;
}
