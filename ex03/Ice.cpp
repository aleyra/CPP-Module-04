#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
}

Ice::Ice(Ice const &src){
	*this = src;
}

Ice::~Ice(){
}

Ice	&Ice::operator=(Ice const &src){
	this->setType(src.getType());
	return (*this);
}

AMateria* 	Ice::clone() const{
	AMateria *nIce = new Ice(*this);
	return(nIce);
}

void 		Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
