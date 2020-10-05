/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 16:48:25 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 21:11:35 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
_name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::AWeapon(AWeapon const & weap) {
	
	*this = weap;

}

AWeapon & AWeapon::operator=(AWeapon const & weap) { 
	
	this->_name = weap._name;
	this->_apcost = weap._apcost;
	this->_damage = weap._damage;
	return (*this);
	
}

AWeapon::~AWeapon(void) {
	
}

std::string const AWeapon::getName(void) const {

	return (this->_name);
	
}

int AWeapon::getAPCost(void) const {
	
	return (this->_apcost);

}
	
int AWeapon::getDamage(void) const {
	
	return (this->_damage);

}