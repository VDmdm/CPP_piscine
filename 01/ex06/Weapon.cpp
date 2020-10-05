/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 12:35:17 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 13:30:10 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type) {

	this->type = type;

}

void Weapon::setType (std::string type) {

	this->type = type;

}

std::string const & Weapon::getType (void) {

	std::string const & ref = this->type;
	return (ref);

}

Weapon::~Weapon (void) {
}