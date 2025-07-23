#pragma once

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanB {

	private:
		string	_name;
		Weapon	*_weapon;

	public:
		HumanB(string name, Weapon weapon = Weapon(""));
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon);

};
