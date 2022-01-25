#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal{
public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal	&operator=(Animal const &src);

	const std::string	&getType() const;
	virtual void		makeSound() const;
	virtual Brain	*getBrain() const = 0;

protected:
	std::string	type;

private:

};

#endif