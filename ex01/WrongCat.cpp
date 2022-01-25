#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Construction of WrongCat" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src){
	std::cout << "Construction of WrongCat by copy" << std::endl;
	this->type = src.type;
}

WrongCat::~WrongCat(){
	std::cout << "Destruction of WrongCat" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &src){
	this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout << type << " is meowing" << std::endl;
}