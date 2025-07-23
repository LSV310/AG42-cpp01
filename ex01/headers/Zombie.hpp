#pragma once

#include <iostream>

using std::string;

class Zombie {

	private:
		string	_name;

	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void) const;
		void	setName(string name);

};

Zombie*	zombieHorde(int N, std::string name);
