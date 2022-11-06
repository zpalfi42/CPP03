#include "ScavTrap.hpp"

/**
 * ! Orthodox canonical needs:
 */

/**
 *	In order to initialize the previously private variables of the class ClapTrap, we have to change them to protected.
 *	A protected variable is like a private variable but it is accesible from a subclass. In this case, if _HP, _ED, _AD and _name
 *		where still private, we couldn't initialize those variables the way we wanted.
 *
 *	Once the variables are now Protected, there are two ways to initalize with a different value.
 *		1 - Use this->variable = value;
 *		2 - Create another constructor in the base class that receives the variables that we want.
 *	I prefer the second one, but both ways are valid. The diference is that in the second way the basic constructor of the base class
 *		is called, and then you change its vaue, while in the second one you already call a constructor that does that for you.
 */

ScavTrap::ScavTrap( void ): ClapTrap(100, 50, 20, "Default")
{
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &scavtrap): ClapTrap(scavtrap._HP, scavtrap._EP, scavtrap._AD, scavtrap._name)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &scavtrap)
{
	if (&scavtrap != this)
	{
		std::cout << "ScavTrap " << scavtrap._name << " copied into " << this->_name << std::endl;
		this->_name = scavtrap._name;
		this->_HP = scavtrap._HP;
		this->_AD = scavtrap._AD;
		this->_EP = scavtrap._EP;
	}
	return (*this);	
}

/**
 * ! Demanded by exercice:
 */

ScavTrap::ScavTrap( std::string name ): ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << this->_name << " constructor called" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << this->_name << " ScavTrap is now in Gate keeper mode" << std::endl;
}

/**
 * ! Not demanded by exercice, made for testing:
 */

int	ScavTrap::getAd( void )
{
	return (20);
}

int	ScavTrap::getHp( void )
{
	return (100);
}

int	ScavTrap::getEp( void )
{
	return (50);
}

std::string	ScavTrap::getName( void )
{
	return (this->_name);
}
