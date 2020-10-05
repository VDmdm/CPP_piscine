/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 20:34:44 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 21:00:28 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class ClapTrap {

protected:

	unsigned int hp;
	unsigned int max_hp;
	unsigned int ep;
	unsigned int max_ep;
	unsigned int lvl;
	std::string name;
	unsigned int m_damage;
	unsigned int r_damage;
	unsigned int armor;


public:

	ClapTrap(void);
	ClapTrap(ClapTrap const & clap);
	ClapTrap & operator=(ClapTrap const & clap);
	~ClapTrap(void);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif