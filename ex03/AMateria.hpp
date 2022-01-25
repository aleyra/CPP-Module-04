#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria{
protected:

public:
	AMateria();
	AMateria(AMateria const &src);
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria &operator=(AMateria const &src);

	std::string const &	getType() const; //Returns the materia type
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
	void				setType(std::string type);

private:
	std::string	_type;
};

#endif