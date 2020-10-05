/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:51:46 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:06:29 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public  AMateria {

public:

	Ice(void);
	Ice(Ice const & ice);
	Ice & operator=(Ice const & ice);
	~Ice(void);
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	AMateria* clone() const;
	void use(ICharacter& target);

};

#endif