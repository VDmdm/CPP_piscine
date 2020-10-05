/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:08:56 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 15:18:59 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string _name): name(_name) {

		std::cout << "Some random victim called " << this->name 
								<< " just appeared!" << std::endl;

}

Victim::Victim(Victim const & vict) {
	
	*this = vict;
	
}

Victim & Victim::operator=(Victim const & vict) {

	this->name = vict.name;
	return (*this);
}

Victim::~Victim(void) {

	std::cout << "Victim " << this->name << " just died for no apparent reason!"
																	<< std::endl;

}

std::string Victim::introduce(void) const {

	return ("I am " + this->name + " and I like otters!");

}

void Victim::getPolymorphed(void) const {
	
	std::cout << this->name << " has been turned into a cute little sheep!"
															<< std::endl;

}

std::ostream & operator<<(std::ostream &out, const Victim &vict) {
	
	out << vict.introduce() << std::endl;
	return (out);

}