/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 16:48:21 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 14:21:04 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon {

protected:

	std::string _name;
	int _apcost;
	int _damage;

public:

	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & weap);
	AWeapon & operator=(AWeapon const & weap);
	virtual ~AWeapon(void);
	std::string const getName(void) const;
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;

};

#endif