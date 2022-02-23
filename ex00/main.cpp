#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(){
	const Animal*		meta = new Animal();
	const Animal*		pochi = new Dog();
	const Animal*		mike = new Cat();
	
	std::cout << pochi->getType() << " " << std::endl;
	std::cout << mike->getType() << " " << std::endl;
	mike->makeSound(); //will output the cat sound!
	pochi->makeSound();
	meta->makeSound();

	const WrongAnimal*	wmeta = new WrongCat();
	const WrongCat*		wmike = new WrongCat();
	std::cout << wmike->getType() << " " << std::endl;
	wmike->makeSound();
	wmeta->makeSound();
	
	delete (meta);
	delete (pochi);
	delete (mike);
	delete (wmeta);
	delete (wmike);
	return (0);
}