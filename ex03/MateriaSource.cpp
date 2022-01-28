#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
}

MateriaSource::MateriaSource(MateriaSource const &src){
	*this=src;
}

MateriaSource::~MateriaSource(){
	for(int i = 0; i < 4; i++){
		if (this->_source[i])
			delete this->_source[i];
	}
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src){
	for(int i = 0; i < 4; i++){
		if (this->_source[i])
			delete this->_source[i];
		if (src._source[i])
			this->_source[i] = src._source[i]->clone();
		else
			this->_source[i] = NULL;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m){
	for(int i = 0; i < 4; i++){
		if (!this->_source[i]){
			this->_source[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if (this->_source[i]->getType() == type){
			return(this->_source[i]->clone());
		}
	}
	return (NULL);
}
