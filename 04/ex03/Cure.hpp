/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 11:51:46 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:50:57 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {

public:

	Cure(void);
	Cure(Cure const & cure);
	Cure & operator=(Cure const & cure);
	~Cure(void);
	std::string const & getType(void) const;
	unsigned int getXP(void) const;
	AMateria* clone(void) const;
	void use(ICharacter& target);

};

#endif