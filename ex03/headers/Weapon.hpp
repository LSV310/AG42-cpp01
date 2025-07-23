#pragma once

#include <iostream>

using std::string;

class Weapon {

	private:
		string	_type;

	public:
		Weapon(string type);
		~Weapon(void);

		string	&getType(void);
		void	setType(string type);

};
