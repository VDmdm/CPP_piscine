/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:25:41 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:41:36 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type) {
	
}

AMateria::AMateria(AMateria const & materia) {
	
	*this = materia;

}

AMateria & AMateria::operator=(AMateria const & materia) {

	this->_type = materia._type;
	this->_xp = materia._xp;
	return (*this);
	
}

AMateria::~AMateria(void) {
	
}

std::string const & AMateria::getType(void) const {

	return (this->_type);

}

unsigned int AMateria::getXP(void) const {

	return (this->_xp);

}

void AMateria::use(ICharacter& target) {
	
	this->_xp += 10;
	(void)target;

}