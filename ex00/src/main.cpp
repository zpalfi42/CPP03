#include "ClapTrap.hpp"

int	main()
{
	ClapTrap john("John Doe");
	ClapTrap chuck("Chuck Norris");
	ClapTrap foreign;
	foreign = chuck;

	john.attack("Chuck Norris");
	chuck.takeDamage(0);
	chuck.takeDamage(132);
	chuck.attack("Me");
	chuck.beRepaired(2);
	chuck.takeDamage(10);
	foreign.attack("John Doe");
	return 0;
}