#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain{
public:
	std::string	ideas[100];

	Brain();
	Brain(Brain const &src);
	virtual ~Brain();

	Brain &operator=(Brain const &src);

protected:

private:

};

#endif