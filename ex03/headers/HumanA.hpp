#pragma once

#include "Weapon.hpp"
#include <iostream>

using std::string;

class HumanA {

	private:
		string	_name;
		Weapon	&_weapon;

	public:
		HumanA(string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

};
