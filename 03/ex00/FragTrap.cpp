/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:08 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 22:14:03 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name): name(_name) {

	std::cout << "Hey, best friend!" << std::endl;
 
}

FragTrap::FragTrap(FragTrap const & frag) {

	std::cout << "Copy constructor called" << std::endl;
	*this = frag;

}

FragTrap & FragTrap::operator=(FragTrap const & frag) {

	std::cout << "Assignation operator called" << std::endl;
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
	
	std::cout << "Destructor called" << std::endl;

}

void FragTrap::rangedAttack(std::string const & target) {
	
	std::cout << "FR4G-TP " << this->name << " attacks "<< target
							<< " at range, causing " << this->r_damage 
							<< " points of damage!" << std::endl;

}

void FragTrap::meleeAttack(std::string const & target) {

	std::cout << "FR4G-TP " << this->name << " attacks "<< target
							<< " at melee, causing " << this->m_damage
							<< " points of damage!" << std::endl;

}

void FragTrap::takeDamage(unsigned int amount) {
	
	if (amount < this->armor)
		amount = this->armor;
	else if (amount - this->armor > this->hp)
		this->hp = 0;
	else
		this->hp -= amount - this->armor;
	std::cout << "FR4G-TP take " << amount - this->armor << "(armor reduced: " 
						<< this->armor << "). hp: " << this->hp << std::endl;

}

void FragTrap::beRepaired(unsigned int amount) {

	if (amount + this->hp > this->max_hp)
		this->hp = this->max_hp;
	else
		this->hp += amount;
	std::cout << "FR4G-TP restored " << amount << ". hp: "
									<< this->hp << std::endl;

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