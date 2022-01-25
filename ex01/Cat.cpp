#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Construction of Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &src){
	std::cout << "Construction of Cat by copy" << std::endl;
	this->type = src.type;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = src.brain->ideas[i];
}

Cat::~Cat(){
	std::cout << "Destruction of Cat" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(Cat const &src){
	this->type = src.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << type << " is meowing" << std::endl;
}

Brain*	Cat::getBrain() const{
	return (this->brain);
}