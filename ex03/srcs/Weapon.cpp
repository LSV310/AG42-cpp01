#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	this->_type = type;
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

string	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(string type)
{
	this->_type = type;
	return ;
}
