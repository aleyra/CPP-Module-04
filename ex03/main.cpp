#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	AMateria *t1;
	t1 = src->createMateria("cure");
	me->equip(t1);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	Character *c = new Character("test");
	c->equip(tmp);
	c->equip(t1);
	c->equip(tmp);
	c->print_equip();
	c->unequip(0);
	c->print_equip();

	Character *cc = new Character(*c);
	cc->print_equip();
	
	delete t1;
	delete tmp;

	delete c;
	delete cc;

	delete bob;
	delete me;
	delete src;

	return (0);
}