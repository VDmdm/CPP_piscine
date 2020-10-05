/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 23:53:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/09 19:34:14 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name) {
	
	this->_ap = 40;
	this->_weapon = 0;

}
	
Character::Character(Character const & chr) {

	*this = chr;

}

Character & Character::operator=(Character const & chr) {
	
	this->_name = chr._name;
	this->_ap = chr._ap;
	this->_weapon = chr._weapon;
	return (*this);

}
Character::~Character(void) {
	
}
	
void Character::recoverAP(void) {
	
	if (this->_ap + 10 > 40)
		this->_ap = 40;
	else
		this->_ap += 10;
	
}
	
void Character::equip(AWeapon* weapon) {
	
	this->_weapon = weapon;

}

void Character::attack(Enemy* enemy) {
	
	if (!this->_weapon || !enemy)
		return ;
	if (this->_ap < this->_weapon->getAPCost())
	{
		std::cout << "Not enought AP: have " << this->_ap
			<< " need " << this->_weapon->getAPCost() << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << enemy->getType()
				<< " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->_ap -= this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const Character::getName(void) const {

	return (this->_name);

}

int Character::getAp(void) const {

	return (this->_ap);

}

AWeapon const * Character::getWeapon(void) const {

	return (this->_weapon);

}

std::ostream & operator<<(std::ostream &out, const Character &chr) {
	
	if (!chr.getWeapon())
		out << chr.getName() << " has " << chr.getAp() << " AP and is unarmed"
														<< std::endl;
	else
		out << chr.getName() << " has " << chr.getAp() << " AP and wields a "
							<< chr.getWeapon()->getName() << std::endl;
	return (out);

}