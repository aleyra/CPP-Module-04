#include "Cat.hpp"
#include "Dog.hpp"

int	main(){
	int		nb = 5;
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
	for (i = 0; i < size; i++){
		std::cout << Array[i]->getType() << "'s ideas are : ";
		brain = Array[i]->getBrain();
		brain->ideas[0] = "eat";
		brain->ideas[1] = "ask for hug";
		brain->ideas[2] = "play";
		brain->ideas[3] = "sleep";
		for (int j = 0; j < 4; j++)
			std::cout << brain->ideas[j] << ", ";
		std::cout << "and other things" << std::endl;
	}

	for (i = 0; i < size; i++)
		delete Array[i];

	return (0);
}