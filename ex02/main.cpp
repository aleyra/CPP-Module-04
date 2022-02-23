#include "Cat.hpp"
#include "Dog.hpp"

int	main(){
	int		nb = 5;
	if (nb < 0)
		nb *= (-1);
	int		size = 2 * nb;
	Animal*	Array[size];
	int		i;

	for (i = 0; i < nb; i++)
		Array[i] = new Cat();
	for (i = nb; i < size; i++)
		Array[i] = new Dog();

	for (i = 0; i < size; i++)
		delete Array[i];

	// Animal	test();//

	return (0);
}