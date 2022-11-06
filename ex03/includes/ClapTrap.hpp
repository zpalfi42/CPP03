#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_HP;
	unsigned int	_EP;
	unsigned int	_AD;
public:
	ClapTrap( void );
	ClapTrap( const ClapTrap &claptrap);
	ClapTrap( unsigned int hp, unsigned int ep, unsigned int ad, std::string name);

	ClapTrap &operator=(const ClapTrap &claptrap);

	ClapTrap(std::string name);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

# endif