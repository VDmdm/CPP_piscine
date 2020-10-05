/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 22:09:50 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:51:29 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void): Enemy(80, "Rad Scorpion") {

	std::cout << "* click click click *" << std::endl;

}

RadScorpion::RadScorpion(RadScorpion const &scorp): RadScorpion() {
	
	*this = scorp;
	std::cout << "* click click click *" << std::endl;

}

RadScorpion & RadScorpion::operator=(RadScorpion const &scorp) { 
	
	Enemy::operator=(scorp);
	return (*this);
	
}

RadScorpion::~RadScorpion(void) {
	
	std::cout << "* SPROTCH *" << std::endl;

}

void RadScorpion::takeDamage(int damage) {

	Enemy::takeDamage(damage - 3);

}