
#include "Harl.hpp"
#include <string>
#include <iostream>

void	Harl::debug()
{
	std::cout << "this is a debug" << std::endl;
}

void	Harl::info()
{
	std::cout << "this is an info." << std::endl;
}

void	Harl::warning()
{
	std::cout << "this is a warning." << std::endl;
}

void	Harl::error()
{
	std::cout << "this is an error." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	typedef void (Harl::*harlFunctions)();

	harlFunctions privateMembers[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*privateMembers[i])();
			return;
		}
	}
}