#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"


class Character:public ICharacter{
public:
	Character();
	Character(Character const &src);
	Character(std::string name);
	virtual ~Character();

	Character operator=(Character const &src);

	virtual std::string const &getName() const;
	virtual void	equip(AMateria* m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);

protected:

private:
	
};

#endif