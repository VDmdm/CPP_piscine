/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 21:37:29 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 22:07:23 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap {

public:

	NinjaTrap(std::string _name);
	NinjaTrap(NinjaTrap const & ninja);
	NinjaTrap & operator=(NinjaTrap const & ninja);
	~NinjaTrap(void);
	void ninjaShoebox(FragTrap & frag);
	void ninjaShoebox(ScavTrap & scav);
	void ninjaShoebox(NinjaTrap & ninja);

};

#endif