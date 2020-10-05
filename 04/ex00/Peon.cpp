/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:29:32 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 15:46:31 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string _name): Victim(_name) {

		std::cout << "Zog zog." << std::endl;

}

Peon::Peon(Peon const & peon): Victim(peon.name) {
	
	*this = peon;
	
}

Peon & Peon::operator=(Peon const & peon) {

	this->name = peon.name;
	return (*this);
}

Peon::~Peon(void) {

	std::cout << "Bleuark..." << std::endl;

}

void Peon::getPolymorphed(void) const {
	
	std::cout << this->name << " has been turned into  a pink pony!"
													<< std::endl;
}

std::ostream & operator<<(std::ostream &out, const Peon &peon) {
	
	out << peon.introduce() << std::endl;
	return (out);

}