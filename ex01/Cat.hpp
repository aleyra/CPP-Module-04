#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat:public Animal{
public:
	Cat();
	Cat(Cat const &src);
	virtual ~Cat();

	Cat	&operator=(Cat const &src);

	virtual void	makeSound() const;
	virtual Brain	*getBrain() const;

protected:

private:
	Brain	*brain;

};

#endif