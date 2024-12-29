#include "FStreamed.h"
#include <iostream>
#include <string>


int main(int argc, char* argv[])
{

	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments..." << std::endl;
		return 0;
	}
	std::string c1 = argv[2];
	std::string c2 = argv[3];
	iStreamed(argv[1], c1, c2);
	return 0;
}