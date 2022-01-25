#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal{
public:
	Animal();
	Animal(Animal const &src);
	virtual ~Animal();

	Animal	&operator=(Animal const &src);

	const std::string	&getType() const;
	virtual void		makeSound() const;

protected:
	std::string	type;

private:

};

#endif