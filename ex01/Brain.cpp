#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Construction of Brain" << std::endl;
}

Brain::Brain(Brain const &src){
	std::cout << "Construction of Brain by copy" << std::endl;
	*this = src;
}

Brain::~Brain(){
	std::cout << "Destruction of Brain" << std::endl;
}

Brain	&Brain::operator=(Brain const &src){

	for(int i = 0; i < 100 ; i++){
		this->_ideas[i] = src._ideas[i];
	}
	return (*this);
}

std::string	*Brain::getIdeas(){
	return (this->_ideas);
}

void		Brain::setIdeas(unsigned int i, std::string str){
	this->_ideas[i] = str;
}

