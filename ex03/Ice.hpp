#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice:public AMateria{
public:
	Ice();
	Ice(Ice const &src);
	virtual ~Ice();

	Ice	&operator=(Ice const &src);

	virtual AMateria* 	clone() const;
	virtual void 		use(ICharacter& target);

protected:

private:

};

#endif