#include "Zombie.h"
#include "Zombie.hpp"

int	main()
{

	Zombie* secondZombie = zombieHorde(10, "ZombiesareHorde");
	delete[] secondZombie;
	return (0);
}