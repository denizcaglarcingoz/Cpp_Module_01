#include "Zombie.h"
#include "Zombie.hpp"
#include <string>
#include <iostream>
#include <sstream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie* zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream temp;
		temp << name << " " << i+1;
		zombieHorde[i].setName(temp.str());
		zombieHorde[i].announce();
	}

	return (zombieHorde);
}