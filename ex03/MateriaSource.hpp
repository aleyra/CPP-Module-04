#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource:public IMateriaSource{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	virtual ~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &src);

	virtual void		learnMateria(AMateria* m);
	virtual AMateria*	createMateria(std::string const & type);

protected:

private:
	AMateria	*_source[4];

};

#endif