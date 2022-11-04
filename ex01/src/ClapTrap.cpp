#include "ClapTrap.hpp"

/**
 * ! Orthodox canonical needs:
 */

ClapTrap::ClapTrap( void ): _name("Default"), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap named Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &claptrap): _name(claptrap._name), _HP(claptrap._HP), _EP(claptrap._EP), _AD(claptrap._AD)
{
	std::cout << "ClapTrap copied " << claptrap._name << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap( unsigned int hp, unsigned int ep, unsigned int ad, std::string name): _name(name), _HP(hp), _EP(ep), _AD(ad)
{
	std::cout << "ClapTrap BASE named " << name << " constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (&claptrap != this)
	{
		std::cout << "ClapTrap " << claptrap._name << " copied into " << this->_name << std::endl;
		this->_name = claptrap._name;
		this->_HP = claptrap._HP;
		this->_AD = claptrap._AD;
		this->_EP = claptrap._EP;
	}
	return (*this);
}


/**
 * ! Demanded by exercice:
 */

ClapTrap::ClapTrap(std::string name): _name(name), _HP(10), _EP(10), _AD(0)
{
	std::cout << "ClapTrap named " << name << " constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap named " << this->_name << " destructor called!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_HP <= 0)
	{
		std::cout << this->_name << " cannot attack, he has 0 HP left!" << std::endl;
	}
	else
	{
		for (int i = 0; i < (int)this->_AD; i++)
		{
			if (this->_EP <= 0)
			{
				std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_AD << " points of damage! But he has no EP left!" << std::endl;
				return ;
			}
			this->_EP--;
		}
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_AD << " points of damage!" << std::endl;
	}
}


void	ClapTrap::takeDamage(unsigned int amount)
{
	for (int i = 0; i < (int)amount; i++)
	{
		if (this->_HP <= 0)
		{
			std::cout << "ClapTrap " << this->_name << " has no more HP left before taking " << amount << " point of damage" << std::endl;
			return ;
		}
		this->_HP--;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " point of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	for (int i = 0; i < (int)amount; i++)
	{
		if (this->_EP <= 0)
		{
			std::cout << "ClapTrap " << this->_name << " repairs himself " << i << " point of damage! But he has no EP left!" << std::endl;
			return ;
		}
		this->_HP++;
		this->_EP--;
	}
	std::cout << "ClapTrap " << this->_name << " repairs himself " << amount << " point of damage!" << std::endl;
}
