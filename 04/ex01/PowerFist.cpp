/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:16:28 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:51:14 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon ("Power Fist", 8, 50) {
	
}

PowerFist::PowerFist(PowerFist const & fist): PowerFist() {
	
	*this = fist;

}

PowerFist & PowerFist::operator=(PowerFist const & fist) { 
	
	this->_name = fist._name;
	this->_apcost = fist._apcost;
	this->_damage = fist._damage;
	return (*this);
	
}

PowerFist::~PowerFist(void) {
	
}

void PowerFist::attack(void) const {
	
	std::cout << "* pschhh... SBAM! *" << std::endl;
	
}