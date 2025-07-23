#pragma once

#include <iostream>

using std::string;

class Zombie {

	private:
		string	_name;

	public:
		Zombie(string name);
		~Zombie(void);

		void	announce(void) const;

};

Zombie	*newZombie(string name);
void	randomChump(string name);
