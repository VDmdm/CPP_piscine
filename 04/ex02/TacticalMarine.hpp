/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 13:48:40 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 14:26:34 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine: public ISpaceMarine {
	
public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & marine);
	TacticalMarine & operator=(TacticalMarine const & marine);
	~TacticalMarine(void);
	ISpaceMarine* clone(void) const;
	void battleCry(void) const;
	void rangedAttack(void) const;
	void meleeAttack(void) const;

};

#endif