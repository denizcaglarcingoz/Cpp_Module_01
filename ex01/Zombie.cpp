#include "Zombie.hpp"
#include "Zombie.h"
#include <iostream>

void    Zombie::announce()
{
    std::cout  << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << name << " created." << std::endl;
}

Zombie::Zombie()
{
    std::cout << name << "A Zombie created. Please name your shit" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " destroyed" << std::endl; 
}

void Zombie::setName(std::string name)
{
	this->name = name;
}