#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap d;
	std::cout << std::endl;
	DiamondTrap a( "XD" );
	std::cout << std::endl;
	DiamondTrap b( "Alfonso" );
	std::cout << std::endl;
	d = b;
	std::cout << std::endl;
	d.attack("Me");
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
}