#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "Construction of Materia" << std::endl;
}

AMateria::AMateria(AMateria const &src){
	std::cout << "Construction of Materia by copy" << std::endl;
	*this = src;
}

AMateria::AMateria(std::string const & type){
	this->_type = type;
	std::cout << "Construction of Materia of type "
		<< this->_type << std::endl;
}

AMateria::~AMateria(){
	std::cout << "Destruction of Materia" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const &src){
	this->_type = src.getType();
}

std::string const &	AMateria::getType() const{
	return (this->_type)
}

void	AMateria::use(ICharacter& target){

}

void	AMateria::setType(std::string type){
	this->_type = type;
}
