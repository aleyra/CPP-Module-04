#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Construction of Dog" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &src){
	std::cout << "Construction of Dog by copy" << std::endl;
	this->brain = new Brain();
	*this = src;
}

Dog::~Dog(){
	std::cout << "Destruction of Dog" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=(Dog const &src){
	this->type = src.type;
	*(this->brain) = *(src.getBrain());
	return (*this);
}

void	Dog::makeSound() const{
	std::cout << type << " is barking" << std::endl;
}

Brain*	Dog::getBrain() const{
	return (this->brain);
}

Animal	&Dog::operator=(Animal const &src){
	this->type = src.getType();
	*(this->brain) = *(src.getBrain());
	return (*this);
}