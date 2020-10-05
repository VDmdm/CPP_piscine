/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:14 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 18:41:58 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>

class FragTrap {

private:

	unsigned int hp = 100;
	unsigned int max_hp = 100;
	unsigned int ep = 100;
	unsigned int max_ep = 100;
	unsigned int lvl = 1;
	std::string name;
	unsigned int m_damage = 30;
	unsigned int r_damage = 20;
	unsigned int armor = 5;

public:

	FragTrap(std::string _name);
	FragTrap(FragTrap const & frag);
	FragTrap & operator=(FragTrap const & frag);
	~FragTrap(void);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target); 

};

#endif