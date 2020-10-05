/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 11:47:15 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 15:59:41 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

typedef struct	s_unit {

	ISpaceMarine* unit;
	s_unit* next;
}				t_unit;

class Squad: public ISquad {

private:

	int count = 0;
	t_unit* stack = 0;
	bool unit_in_list(ISpaceMarine* unit);

public:

	Squad(void);
	Squad(Squad const & squad);
	Squad & operator=(Squad const & squad);
	int getCount(void) const;
	ISpaceMarine* getUnit(int num) const;
	int push(ISpaceMarine* unit);
	~Squad(void);

};

#endif