/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 20:34:44 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 22:19:14 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {

	std::cout << "ClapTrap created!" << std::endl;
 
}

ClapTrap::ClapTrap(ClapTrap const & clap) {

	std::cout << "ClapCopy constructor called" << std::endl;
	*this = clap;

}

ClapTrap & ClapTrap::operator=(ClapTrap const & clap) {

	std::cout << "ClapAssignation operator called" << std::endl;
	(void)clap;
	return (*this);

}

ClapTrap::~ClapTrap(void) {
	
	std::cout << "ClapDestructor called" << std::endl;

}

void ClapTrap::rangedAttack(std::string const & target) {
	
	std::cout << this->name << " attacks "<< target
							<< " at range, causing " << this->r_damage 
							<< " points of damage!" << std::endl;

}

void ClapTrap::meleeAttack(std::string const & target) {

	std::cout << this->name << " attacks "<< target
							<< " at melee, causing " << this->m_damage
							<< " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (amount < this->armor)
		amount = this->armor;
	else if (amount - this->armor > this->hp)
		this->hp = 0;
	else
		this->hp -= amount - this->armor;
	std::cout << this->name << " take " << amount - this->armor << "(armor reduced: " 
						<< this->armor << "). hp: " << this->hp << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount) {

	if (amount + this->hp > this->max_hp)
		this->hp = this->max_hp;
	else
		this->hp += amount;
	std::cout << this->name << " restored " << amount << ". hp: "
									<< this->hp << std::endl;

}