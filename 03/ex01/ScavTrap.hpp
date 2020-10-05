/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:14 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 19:56:26 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class ScavTrap {

private:

	unsigned int hp = 100;
	unsigned int max_hp = 100;
	unsigned int ep = 50;
	unsigned int max_ep = 50;
	unsigned int lvl = 1;
	std::string name;
	unsigned int m_damage = 20;
	unsigned int r_damage = 15;
	unsigned int armor = 3;

public:

	ScavTrap(std::string _name);
	ScavTrap(ScavTrap const & scav);
	ScavTrap & operator=(ScavTrap const & scav);
	~ScavTrap(void);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer (void);

};

#endif