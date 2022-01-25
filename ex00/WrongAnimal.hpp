#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(WrongAnimal const &src);

	const std::string	&getType() const;
	void	makeSound() const;

protected:
	std::string type;

private:

};

#endif