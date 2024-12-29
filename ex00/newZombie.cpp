#include "Zombie.hpp"
#include "Zombie.h"
#include <iostream>

Zombie* newZombie( std::string name)
{
	Zombie* newZombie = new Zombie(name);
	return (newZombie);
}

