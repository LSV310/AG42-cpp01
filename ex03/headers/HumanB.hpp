#pragma once

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanB {

	private:
		string	_name;
		Weapon	*_weapon;

	public:
		HumanB(string name);
		~HumanB(void);

		void	attack(void);
		void	setWeapon(Weapon &weapon);

};
