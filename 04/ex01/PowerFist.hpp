/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:16:23 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 12:37:20 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon {

public:

	PowerFist(void);
	PowerFist(PowerFist const & fist);
	PowerFist & operator=(PowerFist const & fist);
	~PowerFist(void);
	void attack(void) const;

};

#endif