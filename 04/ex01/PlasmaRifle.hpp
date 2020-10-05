/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:16:23 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 14:09:56 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {

public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & rifle);
	PlasmaRifle & operator=(PlasmaRifle const & rifle);
	~PlasmaRifle(void);
	void attack(void) const;

};

#endif