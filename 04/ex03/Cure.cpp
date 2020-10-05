/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:51:46 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:51:32 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure") {
	
}

Cure::Cure(Cure const & cure): AMateria("cure") {
	
	*this = cure;

}

Cure & Cure::operator=(Cure const & cure) {

	AMateria::operator=(cure);
	return (*this);

}

Cure::~Cure(void) {
	
}

AMateria* Cure::clone(void) const {

	return (new Cure(*this));

}

void Cure::use(ICharacter& target) {
	
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;

}