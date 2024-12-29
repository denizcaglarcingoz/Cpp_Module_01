#include <iostream>
#include <string>


int	main()
{
	std::string string = "HI THIS IS BRAIN";

	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory adress of the string varible: " << &string << std::endl;
	std::cout << "Memory adress of the stringPTR: " << &stringPTR << std::endl;
	std::cout << "Memory adress held by the stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory adress held by the stringREF : " << &stringREF << std::endl;

	std::cout << "The value of the string variable: " << &string << std::endl;
	std::cout << "The value pointed to by stringPTR: " << &string << std::endl;
	std::cout << "The value pointed to by stringREF: " << &string << std::endl;
	

	return (0);
}