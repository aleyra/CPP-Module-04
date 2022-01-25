#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Construction of WrongAnimal" << std::endl;
	this->type = "Animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src){
	std::cout << "Construction of WrongAnimal by copy" << std::endl;
	this->type = src.type;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destruction of WrongAnimal" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src){
	this->type = src.type;
	return (*this);
}

std::string	const & WrongAnimal::getType() const{
	return(this->type);
}

void	WrongAnimal::makeSound() const{
	std::cout << type << " make a sound" << std::endl;
}