#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap:	public virtual ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap &fragtrap);
	FragTrap( std::string name );

	~FragTrap();

	FragTrap	&operator=(const FragTrap &fragtrap);

	void	highFivesGuys( void );

	int			getHp( void );
	int			getEp( void );
	int			getAd( void );

	std::string	getName( void );
};

#endif