#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal{
public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();

	Dog	&operator=(Dog const &src);

	virtual void	makeSound() const;
	virtual Brain	*getBrain() const;

protected:

private:
	Brain*	brain;

};

#endif