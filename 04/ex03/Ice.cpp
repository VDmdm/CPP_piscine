/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:51:46 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:06:22 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice") {
	
}

Ice::Ice(Ice const & ice): AMateria("ice") {
	
	*this = ice;

}

Ice & Ice::operator=(Ice const & ice) {

	AMateria::operator=(ice);
	return (*this);

}

Ice::~Ice(void) {
	
}

AMateria* Ice::clone(void) const {

	return (new Ice(*this));

}

void Ice::use(ICharacter& target) {
	
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName()
											<< " *" << std::endl;

}