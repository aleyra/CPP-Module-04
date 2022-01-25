#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>
# include <string>
# include "AMateria.hpp"

class ICharacter{
public:
	ICharacter();
	ICharacter(ICharacter const & src);
	virtual ~ICharacter() {}
	
	ICharacter	operator=(ICharacter const &src);

	virtual std::string const & getName() const = 0;
	virtual void	equip(AMateria* m) = 0;
	virtual void	unequip(int idx) = 0;
	virtual void	use(int idx, ICharacter& target) = 0;

	void			setName(std::string const name);


private:
	std::string _name;
	AMateria	*_inventory[4];
};

#endif