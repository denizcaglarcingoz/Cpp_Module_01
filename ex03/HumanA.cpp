#include "HumanA.hpp"
#include "Weapon.hpp"

#include <iostream>
#include <string>



void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << (this->humanAWeapon).getType() << std::endl;
}

