#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("Zombibi1");

	randomChump("Zombibi2");

	delete zombie;
}
