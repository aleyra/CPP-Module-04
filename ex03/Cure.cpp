#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
}

Cure::Cure(Cure const &src){
	*this = src;
}

Cure::~Cure(){
}

Cure	&Cure::operator=(Cure const &src){
	this->setType(src.getType());
	return (*this);
}

AMateria* 	Cure::clone() const{
	AMateria *ncure = new Cure(*this);
	return(ncure);
}

void 		Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
