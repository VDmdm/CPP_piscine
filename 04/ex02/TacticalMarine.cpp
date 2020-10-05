/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:48:40 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 15:46:11 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	
	std::cout << "Tactical Marine ready for battle!" << std::endl;

}
TacticalMarine::TacticalMarine(TacticalMarine const & marine) {

	*this = marine;
	std::cout << "Tactical Marine ready for battle!" << std::endl;

}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & marine) {
	
	(void)marine;
	return (*this);

}

TacticalMarine::~TacticalMarine(void) {
	
	std::cout << "Aaargh..." << std::endl;

}

ISpaceMarine* TacticalMarine::clone(void) const {
	
	return (new TacticalMarine);

}

void TacticalMarine::battleCry(void) const {
	
	std::cout << "For the holy PLOT!" << std::endl;

}

void TacticalMarine::rangedAttack(void) const{
	
	std::cout << "* attacks with a bolter *" << std::endl;
	
}

void TacticalMarine::meleeAttack(void) const {
	
	std::cout << "* attacks with a chainsword *" << std::endl;

}
