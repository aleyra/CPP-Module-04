#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Construction of Dog" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &src){
	std::cout << "Construction of Dog by copy" << std::endl;
	this->type = src.type;
}

Dog::~Dog(){
	std::cout << "Destruction of Dog" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog const &src){
	this->type = src.type;
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << type << " is barking" << std::endl;
}

Brain*	Dog::getBrain() const{
	return (this->brain);
}