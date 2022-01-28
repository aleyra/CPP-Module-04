#include "Character.hpp"

Character::Character(){
}

Character::Character(Character const &src){
	*this = src;
}

Character::Character(std::string name){
	this->_name = name;
}

Character::~Character(){
}

Character &Character::operator=(Character const &src){
	this->_name = src.getName();
	for(int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i];
	}
	return (*this);
}

std::string const	&Character::getName() const{
	return(this->_name);
}

void	Character::equip(AMateria* m){
	for(int i = 0; i < 4; i++){
		if (!this->_inventory[i]){
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx){
	for (int i = idx; i < 3; i++){
		this->_inventory[i] = this->_inventory[i + 1];
	}
	this->_inventory[3] = NULL;
}

void	Character::use(int idx, ICharacter& target){
	this->_inventory[idx]->use(target);
}

void	Character::setName(std::string const name){
	this->_name = name;
}

void	Character::print_equip() const{
	std::cout << "Inventory of " << this->getName() << ":" << std::endl;
	for (int i = 0; i < 4; i++){
		std::cout << i << " : ";
		if (this->_inventory[i]){
			std::cout << this->_inventory[i]->getType() << std::endl;
		}
		else
			std::cout << "-" << std::endl;
	}
}
