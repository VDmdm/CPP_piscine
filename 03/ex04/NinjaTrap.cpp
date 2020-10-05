/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 21:32:59 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 13:27:57 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string _name) {

	std::cout << "NinjaTrap created!" << std::endl;
	this->hp = 60;
	this->max_hp = 60;
	this->ep = 120;
	this->max_ep = 120;
	this->lvl = 1;
	this->name = _name;
	this->m_damage = 60;
	this->r_damage = 5;
	this->armor = 0;

}

NinjaTrap::NinjaTrap(NinjaTrap const & ninja) {

	std::cout << "NinjaCopy constructor called" << std::endl;
	*this = ninja;

}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & ninja) {

	std::cout << "NinjaAssignation operator called" << std::endl;
	this->hp = ninja.hp;
	this->ep = ninja.ep;
	this->max_hp = ninja.max_hp;
	this->max_ep = ninja.max_ep;
	this->lvl = ninja.lvl;
	this->name = ninja.name;
	this->m_damage = ninja.m_damage;
	this->r_damage = ninja.r_damage;
	this->armor = ninja.armor;
	return (*this);

}

NinjaTrap::~NinjaTrap(void) {
	
	std::cout << "NinjaDestructor called" << std::endl;

}

void NinjaTrap::ninjaShoebox(FragTrap & frag) {
	
	std::cout << this->name << " disappears and you begin to see the events of the future ..."
			<< std::endl;
	frag.vaulthunter_dot_exe("you");
	std::cout << "you're back in reality ... it was horrible!" << std::endl;

}

void NinjaTrap::ninjaShoebox(ScavTrap & scav) {
	std::cout << this->name << " disappears and you are left alone with the ScavTrap" 
	<< ". You hear the voice of a ninja: \"You will be offered a test. Either \
you pass or you die. Your turn.\"" << std::endl;
	scav.challengeNewcomer();
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninja) {

	if (&ninja == &(*this))
		std::cout << this->name << " Throws a smoke screen at your feet and disappears" << std::endl;
	else
		std::cout << "it looks like " << this->name << " and " << ninja.name << " are happy to see each other,\
because they are NINJA BROTHERS. Now you have DOUBLE TROUBLES" << std::endl;

}
