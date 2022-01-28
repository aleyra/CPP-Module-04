#include "AMateria.hpp"

AMateria::AMateria(){
}

AMateria::AMateria(AMateria const &src){
	*this = src;
}

AMateria::AMateria(std::string const & type){
	this->_type = type;
}

AMateria::~AMateria(){
}

AMateria	&AMateria::operator=(AMateria const &src){
	this->_type = src.getType();
	return (*this);
}

std::string const &	AMateria::getType() const{
	return (this->_type);
}

void	AMateria::use(ICharacter& target){
	(void)target;
}

void	AMateria::setType(std::string type){
	this->_type = type;
}
