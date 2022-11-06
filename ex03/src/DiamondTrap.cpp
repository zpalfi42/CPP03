#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_HP = this->FragTrap::getHp();
	this->_EP = this->ScavTrap::getEp();
	this->_AD = this->FragTrap::getAd();
	std::cout << "DiamondTrap " << this->_name << " constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &diamondtrap ): ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
	this->_name = diamondtrap._name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_HP = diamondtrap._HP;
	this->_EP = diamondtrap._EP;
	this->_AD = diamondtrap._AD;
	std::cout << "DiamondTrap " << diamondtrap._name << " copy contructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_HP = this->FragTrap::getHp();
	this->_EP = this->ScavTrap::getEp();
	this->_AD = this->FragTrap::getAd();
	std::cout << "DiamondTrap " << this->_name << " contructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( const DiamondTrap &diamondtrap )
{
	if (this != &diamondtrap)
	{
		std::cout << "DiamondTrap " << diamondtrap._name << " copied into " << this->_name << std::endl;
		this->_name = diamondtrap._name;
		this->ClapTrap::_name = diamondtrap.ClapTrap::_name;
		this->_HP = diamondtrap._HP;
		this->_AD = diamondtrap._AD;
		this->_EP = diamondtrap._EP;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

void	DiamondTrap::attack( const std::string &target )
{
	this->ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "I am " << this->_name <<", and my ClapTrap is " << this->ClapTrap::_name << std::endl;
}
