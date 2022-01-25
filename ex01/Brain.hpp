#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain{
public:
	Brain();
	Brain(Brain const &src);
	virtual ~Brain();

	Brain &operator=(Brain const &src);

	virtual std::string	*getIdeas();
	virtual void		setIdeas(unsigned int i, std::string str);

protected:

private:
	std::string	_ideas[100];

};

#endif