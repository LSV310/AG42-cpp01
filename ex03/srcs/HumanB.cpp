#include "HumanB.hpp"

HumanB::HumanB(string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	Weapon	weapon = *this->_weapon;

	std::cout << this->_name << " attacks with their " << weapon.getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
