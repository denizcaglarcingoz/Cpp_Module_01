#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& humanAWeapon;

	public:
		HumanA(std::string name, Weapon& humanAWeapon) : name(name), humanAWeapon(humanAWeapon){}
		void	attack();
};




#endif