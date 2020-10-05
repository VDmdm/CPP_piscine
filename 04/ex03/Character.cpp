/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 13:52:11 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:28:39 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name): _name(name) {
	
}

Character::Character(Character const & chr) {
	
	*this = chr;

}

Character & Character::operator=(Character const & chr) {

	int idx = 0;

	this->~Character();
	this->_name = chr._name;
	while (idx < 4)
	{
		if (chr.inventory[idx])
			this->inventory[idx] = chr.inventory[idx]->clone();
		idx++;
	}
	return (*this);

}

Character::~Character(void) {

	int idx = 0;
	while (idx < 4)
	{
		if (this->inventory[idx])
		{
			delete this->inventory[idx];
			this->inventory[idx] = 0;
		}
		idx++;
	}
}

std::string const & Character::getName(void) const {
	
	return (this->_name);

}

void Character::equip(AMateria* m) {
	
	int idx = 0;

	while (idx < 4)
	{
		if (!this->inventory[idx])
		{
			this->inventory[idx] = m;
			break;
		}
		idx++;
	}
}

void Character::unequip(int idx) {
	
	if (idx > 3 || idx < 0 || !this->inventory[idx])
		return ;
	this->inventory[idx] = 0;

}

void Character::use(int idx, ICharacter& target) {
	
	if (idx > 3 || idx < 0 || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);

}