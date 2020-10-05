/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 12:47:11 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 13:57:09 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

private:

	std::string name;
	Weapon * weapon;

public:
	
	HumanB(std::string name);
	void setWeapon(Weapon &Weapon);
	void attack(void);
	~HumanB(void);
	
};

#endif