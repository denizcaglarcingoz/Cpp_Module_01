#ifndef	HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* humanBWeapon;

	public:
		HumanB(std::string name) : name(name){}
		void	attack();
		void	setWeapon(Weapon& humanBWeapon);
};


#endif