/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 12:47:15 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 13:57:21 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name): name(name) {
}

void HumanB::setWeapon (Weapon &Weapon) {
	
	this->weapon = &Weapon;

}

void HumanB::attack(void) {

	std::cout << this->name << " attacks with his " << this->weapon->getType()
													<< std::endl;

}

HumanB::~HumanB(void) {
}