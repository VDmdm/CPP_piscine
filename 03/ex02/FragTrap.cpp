/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:08 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 22:13:29 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) {

	std::cout << "FragTrap created!" << std::endl;
	this->hp = 100;
	this->max_hp = 100;
	this->ep = 100;
	this->max_ep = 100;
	this->lvl = 1;
	this->name = _name;
	this->m_damage = 30;
	this->r_damage = 20;
	this->armor = 5;

}

FragTrap::FragTrap(FragTrap const & frag) {

	std::cout << "FragCopy constructor called" << std::endl;
	*this = frag;

}

FragTrap & FragTrap::operator=(FragTrap const & frag) {

	std::cout << "FragAssignation operator called" << std::endl;
	this->hp = frag.hp;
	this->ep = frag.ep;
	this->max_hp = frag.max_hp;
	this->max_ep = frag.max_ep;
	this->lvl = frag.lvl;
	this->name = frag.name;
	this->m_damage = frag.m_damage;
	this->r_damage = frag.r_damage;
	this->armor = frag.armor;
	return (*this);

}

FragTrap::~FragTrap(void) {
	
	std::cout << "FragDestructor called" << std::endl;

}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	
	srand(time(0) + this->ep);
	int damage[5] = {0, 5 , 10 , 25, 50};
	std::string weap[5] = {"flower", "tits", "hummer",
								"brazilian", "Covid"};
	if (this->ep < 25)
		std::cout << "Need more energy. You have: " << this->ep <<std::endl;
	else {
		this->ep -= 25;
		std::cout << name << " concentrait he power and... strikes " << target
					<< " with his " << weap[rand() % 5] << " and deal "
					<< damage[rand() % 5] << " points of damage! Energy: "
					<< this->ep << "." << std::endl;
	}
}