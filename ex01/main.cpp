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

	std::cout << Array[0]->getType() << "'s ideas are : ";
	brain = Array[0]->getBrain();
	brain->ideas[0] = "eat";
	brain->ideas[1] = "ask for hug";
	brain->ideas[2] = "play";
	brain->ideas[3] = "sleep";
	for (int j = 0; j < 4; j++)
		std::cout << brain->ideas[j] << ", ";
	std::cout << "and other things" << std::endl;

	*(Array[nb - 1]) = *(Array[0]);
	std::cout << "an idea of another " << Array[nb - 1]->getType() << " is : ";
	brain = Array[nb - 1]->getBrain();
	std::cout << brain->ideas[0] << std::endl;

	std::cout << std::endl;

	Cat	n;
	std::cout << n.getType() << "'s ideas are : ";
	brain = n.getBrain();
	brain->ideas[0] = "eat";
	brain->ideas[1] = "ask for hug";
	brain->ideas[2] = "play";
	brain->ideas[3] = "sleep";
	for (int j = 0; j < 4; j++)
		std::cout << brain->ideas[j] << ", ";
	std::cout << "and other things" << std::endl;

	{
		Cat tmp = n;

		std::cout << "an idea of another " << tmp.getType() << " is : ";
		brain = tmp.getBrain();
		std::cout << brain->ideas[0] << std::endl;
	}

	std::cout << std::endl;

	// Cat o = Cat(n);
	// std::cout << "an idea of another " << o.getType() << " is : ";
	// brain = o.getBrain();
	// std::cout << brain->ideas[0] << std::endl;

	for (i = 0; i < size; i++)
		delete Array[i];

	return (0);
}