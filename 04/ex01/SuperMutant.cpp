/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 22:09:50 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:51:24 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant") {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;

}

SuperMutant::SuperMutant(SuperMutant const &mutant): SuperMutant() {
	
	*this = mutant;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;

}

SuperMutant & SuperMutant::operator=(SuperMutant const & mutant) { 

	Enemy::operator=(mutant);
	return (*this);
	
}

SuperMutant::~SuperMutant(void) {
	
	std::cout << "Aaargh..." << std::endl;

}

void SuperMutant::takeDamage(int damage) {

	Enemy::takeDamage(damage - 3);

}