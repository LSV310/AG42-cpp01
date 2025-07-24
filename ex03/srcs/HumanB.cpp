#include "HumanB.hpp"

HumanB::HumanB(string name)
{
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	if (!this->_weapon)
		return ;

	Weapon	weapon = *this->_weapon;
	std::cout << this->_name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
