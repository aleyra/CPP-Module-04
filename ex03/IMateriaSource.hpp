#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include "AMateria.hpp"

class IMateriaSource{
public:
	IMateriaSource();
	IMateriaSource(IMateriaSource const &src);
	virtual ~IMateriaSource() {}

	IMateriaSource	&operator=(IMateriaSource const &src);

	virtual void		learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & type) = 0;
};

#endif