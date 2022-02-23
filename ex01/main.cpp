#include "Cat.hpp"
#include "Dog.hpp"

int	main(){
	int		nb = 3;
	if (nb < 0)
		nb *= (-1);
	int		size = 2 * nb;
	Animal*	Array[size];
	int		i;
	Brain*	brain;

	for (i = 0; i < nb; i++)
		Array[i] = new Cat();
	for (i = nb; i < size; i++)
		Array[i] = new Dog();
	for (i = 0; i < size; i++)
		std::cout << Array[i]->getType() << std::endl;
	std::cout << std::endl;

	for (i = 0; i < size; i++)
		delete Array[i];
	std::cout << std::endl;

	Cat	*n = new Cat();
	std::cout << n->getType() << "'s ideas are : ";
	brain = n->getBrain();
	brain->setIdeas(0, "eat");
	brain->setIdeas(1, "ask for hug");
	brain->setIdeas(2, "play");
	brain->setIdeas(3, "sleep");
	for (int j = 0; j < 4; j++)
		std::cout << brain->getIdeas()[j] << ", ";
	std::cout << "and other things" << std::endl;

	{
		Cat tmp;

		tmp = *n;

		std::cout << "an idea of another " << tmp.getType() << " is : ";
		brain = tmp.getBrain();
		std::cout << brain->getIdeas()[0] << std::endl;
	}

	std::cout << std::endl;

	Cat t(*n);
	std::cout << "an idea of another " << t.getType() << " is : ";
	brain = t.getBrain();
	std::cout << brain->getIdeas()[1] << std::endl;

	delete n;
	return (0);
}