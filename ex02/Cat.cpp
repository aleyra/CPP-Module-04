#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Construction of Cat" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src){
	std::cout << "Construction of Cat by copy" << std::endl;
	this->type = src.type;
}

Cat::~Cat(){
	std::cout << "Destruction of Cat" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(Cat const &src){
	this->type = src.type;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << type << " is meowing" << std::endl;
}

Brain*	Cat::getBrain() const{
	return (this->_brain);
}