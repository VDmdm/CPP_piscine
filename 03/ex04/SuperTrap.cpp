/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 22:55:37 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 13:08:40 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string _name):
NinjaTrap(_name), FragTrap(_name) {

	std::cout << "SuperTrap created!" << std::endl;
	this->name = _name;
	this->hp = FragTrap::hp;
	this->max_hp = FragTrap::max_hp;
	this->ep = NinjaTrap::ep;
	this->max_ep = NinjaTrap::max_ep;
	this->lvl = 1;
	this->m_damage = NinjaTrap::m_damage;
	this->r_damage = FragTrap::r_damage;
	this->armor = FragTrap::armor;
}

SuperTrap::SuperTrap(SuperTrap const & super):
NinjaTrap(super), FragTrap(super) {

	std::cout << "SuperCopy constructor called" << std::endl;
	*this = super;

}

SuperTrap & SuperTrap::operator=(SuperTrap const & super) {

	std::cout << "NinjaAssignation operator called" << std::endl;
	this->hp = super.hp;
	this->ep = super.ep;
	this->max_hp = super.max_hp;
	this->max_ep = super.max_ep;
	this->lvl = super.lvl;
	this->name = super.name;
	this->m_damage = super.m_damage;
	this->r_damage = super.r_damage;
	this->armor = super.armor;
	return (*this);

}

SuperTrap::~SuperTrap(void) {
	
	std::cout << "SuperDestructor called" << std::endl;

}