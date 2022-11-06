#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name);
	ScavTrap( const ScavTrap &scavtrap);

	~ScavTrap();

	ScavTrap &operator=( const ScavTrap &scavtrap);

	void		guardGate( void );

	int			getHp( void );
	int			getEp( void );
	int			getAd( void );

	std::string	getName( void );
};

#endif