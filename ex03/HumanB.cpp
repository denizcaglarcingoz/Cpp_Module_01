#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>
#include <string>

// HumanB::HumanB(std::string name)
// {
// 	this->name = name;
// 	this->humanBWeapon.setType("No Weapon");
// }

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << (*this->humanBWeapon).getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& humanBWeapon)
{
	*this->humanBWeapon = humanBWeapon;
}