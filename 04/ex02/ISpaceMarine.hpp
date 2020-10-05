/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:46:36 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 14:18:19 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine {
	
public:

	virtual ~ISpaceMarine(void) {}
	virtual ISpaceMarine* clone(void) const = 0;
	virtual void battleCry(void) const = 0;
	virtual void rangedAttack(void) const = 0;
	virtual void meleeAttack(void) const = 0;
	
};

#endif