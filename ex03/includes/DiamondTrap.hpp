#pragma once
#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap( void );
	DiamondTrap( const DiamondTrap &diamondtrap );
	DiamondTrap( std::string name );

	DiamondTrap	&operator=( const DiamondTrap &diamondtrap );

	~DiamondTrap();

	void	attack( const std::string &target );
	void	whoAmI( void );
};


#endif