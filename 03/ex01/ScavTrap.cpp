/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:08 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 20:04:20 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): name(_name) {

	std::cout << "ScavTrap created!" << std::endl;
 
}

ScavTrap::ScavTrap(ScavTrap const & scav) {

	std::cout << "ScavCopy constructor called" << std::endl;
	*this = scav;

}

ScavTrap & ScavTrap::operator=(ScavTrap const & scav) {

	std::cout << "ScavAssignation operator called" << std::endl;
	this->hp = scav.hp;
	this->ep = scav.ep;
	this->max_hp = scav.max_hp;
	this->max_ep = scav.max_ep;
	this->lvl = scav.lvl;
	this->name = scav.name;
	this->m_damage = scav.m_damage;
	this->r_damage = scav.r_damage;
	this->armor = scav.armor;
	return (*this);

}

ScavTrap::~ScavTrap(void) {
	
	std::cout << "ScavDestructor called" << std::endl;

}

void ScavTrap::rangedAttack(std::string const & target) {
	
	std::cout << "SC4G-TP:" << this->name << " attacks "<< target
							<< " at range, causing " << this->r_damage 
							<< " points of damage!" << std::endl;

}

void ScavTrap::meleeAttack(std::string const & target) {

	std::cout << "SC4G-TP:" << this->name << " attacks "<< target
							<< " at melee, causing " << this->m_damage
							<< " points of damage!" << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount) {
	
	if (amount < this->armor)
		amount = this->armor;
	else if (amount - this->armor > this->hp)
		this->hp = 0;
	else
		this->hp -= amount - this->armor;
	std::cout << "SC4G-TP:" << this->name << " take " << amount - this->armor << "(armor reduced: " 
						<< this->armor << "). hp: " << this->hp << std::endl;

}

void ScavTrap::beRepaired(unsigned int amount) {

	if (amount + this->hp > this->max_hp)
		this->hp = this->max_hp;
	else
		this->hp += amount;
	std::cout << "SC4G-TP:" << this->name << " restored " << amount << ". hp: "
									<< this->hp << std::endl;

}

void ScavTrap::challengeNewcomer(void) {
	
	std::string challenges[5] = {
"See that barrel with the yellow sign? \
Scoop it out and drink the liquid. \
If you survive, we'd love to welcome you, NewComer! \
Before you ask: yes, it is a must",
"Greetings! There is a special test for you today! \
Ready? Ready??? Come on, I deceived you, just go inside.",
"I have a new test for you! And so, I will kick you, \
but you must not fall! Come on, this is fun",
"Only today you can buy 2 entrances and get the third \
one as a gift! To do this, take the entrance test. And so, \
do you like to come in? Great, here's the card number: 4353 ...", 
"For me to let you in, tell me what is the answer \
to all the questions?"};
	srand(time(0) + this->hp);
	std::cout << challenges[rand() % 5] << std::endl;
}