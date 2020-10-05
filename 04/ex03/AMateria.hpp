/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 10:25:41 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:41:41 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

private:

	std::string _type;
	unsigned int _xp = 0;

public:

	AMateria(std::string const & type);
	AMateria(AMateria const & materia);
	AMateria & operator=(AMateria const & materia);
	virtual ~AMateria(void);
	std::string const & getType(void) const; //Returns the materia type
	unsigned int getXP(void) const; //Returns the Materia's XP
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);

};

#endif