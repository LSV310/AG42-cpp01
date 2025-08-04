#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("DEBUG");
	std::cout << "\e[1;36m───────────────────────────\e[0m" << std::endl;
	harl.complain("INFO");
	std::cout << "\e[1;36m───────────────────────────\e[0m" << std::endl;
	harl.complain("WARNING");
	std::cout << "\e[1;36m───────────────────────────\e[0m" << std::endl;
	harl.complain("ERROR");
	std::cout << "\e[1;36m───────────────────────────\e[0m" << std::endl;
	harl.complain("SALUT");
	std::cout << "\e[1;36m───────────────────────────\e[0m" << std::endl;
	harl.complain("");
}
