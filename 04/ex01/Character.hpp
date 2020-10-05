/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 23:53:17 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:35:49 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {
	
private:

	std::string _name;
	AWeapon *	_weapon;
	int			_ap;
	
public:

	Character(std::string const & name);
	Character(Character const & chr);
	Character &operator=(Character const & chr);
	~Character(void);
	void recoverAP(void);
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);
	std::string const getName(void) const;
	int getAp(void) const;
	AWeapon const * getWeapon(void) const;

};

std::ostream & operator<<(std::ostream &out, const Character &chr);

#endif