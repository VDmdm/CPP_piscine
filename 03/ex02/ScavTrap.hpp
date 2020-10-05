/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:14 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 20:51:57 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:

	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const & scav);
	ScavTrap & operator=(ScavTrap const & scav);
	~ScavTrap(void);
	void challengeNewcomer (void);

};

#endif