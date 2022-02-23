#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++){
		this->_source[i] = NULL;
	}
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
	// std::cout << "tests 4\n";//
		if (!this->_source[i]){
			this->_source[i] = m;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		// std::cout << "tests 1 " << type << " " <<this->_source[i]->getType()<< "\n";//
		if (this->_source[i]->getType() == type){
			// std::cout << this->_source[i]->getType() << std::endl;//
			return(this->_source[i]->clone());
		}
	}
	return (NULL);
}
