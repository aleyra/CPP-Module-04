#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Construction of Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &src){
	std::cout << "Construction of Cat by copy" << std::endl;
	*this = src;
}

Cat::~Cat(){
	std::cout << "Destruction of Cat" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=(Cat const &src){
	this->type = src.type;
	*(this->brain) = *(src.getBrain());
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << type << " is meowing" << std::endl;
}

Brain*	Cat::getBrain() const{
	return (this->brain);
}

Animal	&Cat::operator=(Animal const &src){
	this->type = src.getType();
	*(this->brain) = *(src.getBrain());
	return (*this);
}