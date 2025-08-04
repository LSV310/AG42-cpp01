#include "Harl.hpp"

int	main(int ac, char **av)
{
	string	level;
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "\e[0;31mInvalid amount of arguments\e[0m" << std::endl;
		return (1);
	}
	level = av[1];
	harl.complain(level);
	return (0);
}
