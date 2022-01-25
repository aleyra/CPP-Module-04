#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure:public AMateria{
public:
	Cure();
	Cure(Cure const &src);
	virtual ~Cure();

	Cure	&operator=(Cure const &src);

	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);

protected:

private:

};

#endif