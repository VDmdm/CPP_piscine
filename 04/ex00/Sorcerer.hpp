/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:28:44 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 15:26:50 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {

private:

	std::string name;
	std::string title;

public:

	Sorcerer(std::string _name, std::string _title);
	Sorcerer(Sorcerer const & sorc);
	Sorcerer & operator=(Sorcerer const & sorc);
	~Sorcerer(void);
	std::string introduce(void) const;
	void polymorph(Victim const &vict) const;
	
};

std::ostream & operator<<(std::ostream &out, const Sorcerer &sorc);

#endif