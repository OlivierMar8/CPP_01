//HumanB.cpp	CPP01 / ex03

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {

	_weaponPTR = NULL;
	return;
}

HumanB::~HumanB( void ) {

	return;
}

std::string	HumanB::getName( void) const {

	return (this->_name);
}

void	HumanB::setName( std::string name) {

	this->_name = name;
	return;
}

Weapon*	HumanB::getWeapon(void ) const {

	return (this->_weaponPTR);
}

void	HumanB::setWeapon( Weapon& weaponPTR) {

	this->_weaponPTR = &weaponPTR;
	return;
}

void	HumanB::attack( void) const {

	std::cout << this->_name << " attacks with their " << _weaponPTR->getType() << std::endl;
	return;
}

