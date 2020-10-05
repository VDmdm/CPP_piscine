/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 15:27:41 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 16:07:40 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim {
	
public:

	Peon(std::string _name);
	Peon(Peon const & peon);
	Peon & operator=(Peon const & peon);
	~Peon(void);
	void getPolymorphed(void) const;

};

std::ostream & operator<<(std::ostream &out, const Peon &peon);

#endif