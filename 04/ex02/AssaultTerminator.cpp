/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:48:40 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 15:47:34 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	
	std::cout << "* teleports from space *" << std::endl;

}
AssaultTerminator::AssaultTerminator(AssaultTerminator const & terminator) {

	*this = terminator;
	std::cout << "* teleports from space *" << std::endl;

}

AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & terminator) {
	
	(void)terminator;
	return (*this);

}

AssaultTerminator::~AssaultTerminator(void) {
	
	std::cout << "I’ll be back..." << std::endl;

}

ISpaceMarine* AssaultTerminator::clone(void) const {
	
	return (new AssaultTerminator);

}

void AssaultTerminator::battleCry(void) const {
	
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;

}

void AssaultTerminator::rangedAttack(void) const {
	
	std::cout << "* does nothing *" << std::endl;
	
}

void AssaultTerminator::meleeAttack(void) const {
	
	std::cout << "* attacks with chainfists *" << std::endl;

}
