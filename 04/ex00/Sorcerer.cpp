/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:28:33 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 15:26:44 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string _name, std::string _title):
	name(_name), title(_title) {

		std::cout << this->name + ',' << this->title + ','
								<< " is born!" << std::endl;

}

Sorcerer::Sorcerer(Sorcerer const & sorc) {
	
	*this = sorc;
	
}

Sorcerer & Sorcerer::operator=(Sorcerer const & sorc) {

	this->name = sorc.name;
	this->title = sorc.title;
	return (*this);
}

Sorcerer::~Sorcerer(void) {

	std::cout << this->name + ',' << this->title + ','
		<< " is dead. Consequences will never be the same!" << std::endl;

}

std::string Sorcerer::introduce(void) const {

	return ("I am " + this->name + ',' + this->title
					+ ',' + " and I like ponies!");

}

void Sorcerer::polymorph(Victim const &vict) const {

	vict.getPolymorphed();

}

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorc) {
	
	out << sorc.introduce() << std::endl;
	return (out);

}