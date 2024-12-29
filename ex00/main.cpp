#include "Zombie.h"
#include "Zombie.hpp"

int	main()
{
	Zombie firstZombie("1. Zombie");

	firstZombie.announce();

	Zombie* secondZombie = newZombie("2. Zombie");
	secondZombie->announce();

	randomChump("3. Zombie");	

	delete secondZombie;
	return (0);
}