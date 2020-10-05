/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:16:28 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:51:41 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void): AWeapon ("Plasma Rifle", 5, 21) {
	
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & rifle): PlasmaRifle () {
	
	*this = rifle;

}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rifle) {

	this->_name = rifle._name;
	this->_apcost = rifle._apcost;
	this->_damage = rifle._damage;
	return (*this);
	
}

PlasmaRifle::~PlasmaRifle(void) {
	
}

void PlasmaRifle::attack(void) const {
	
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	
}