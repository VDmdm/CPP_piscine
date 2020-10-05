/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:48:40 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 15:46:33 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator: public ISpaceMarine {
	
public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & terminator);
	AssaultTerminator & operator=(AssaultTerminator const & terminator);
	~AssaultTerminator(void);
	ISpaceMarine* clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;

};

#endif