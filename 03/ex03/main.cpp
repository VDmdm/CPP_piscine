/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:38:58 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 22:05:01 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main (void) {
{
	FragTrap a("FragTrap");
	a.rangedAttack("Denis");
	a.meleeAttack("Denis");
	a.vaulthunter_dot_exe("Tania");
	a.vaulthunter_dot_exe("Tania");
	a.vaulthunter_dot_exe("Tania");
	a.vaulthunter_dot_exe("Tania");
	a.vaulthunter_dot_exe("Tania");
	a.vaulthunter_dot_exe("Tania");
	a.takeDamage(50);
	a.takeDamage(105);
	a.beRepaired(50);
	a.beRepaired(1050);
}
{
	std::cout << "-----------" << std::endl;
	ScavTrap a("ScavTrap");
	a.rangedAttack("Denis");
	a.meleeAttack("Denis");
	a.challengeNewcomer();
	a.takeDamage(50);
	a.challengeNewcomer();
	a.takeDamage(105);
	a.challengeNewcomer();
	a.beRepaired(50);
	a.challengeNewcomer();
	a.beRepaired(1050);
	a.challengeNewcomer();
}
{
	std::cout << "-----------" << std::endl;
	NinjaTrap ninja1("NinjaTrap");
	NinjaTrap ninja2("NinjaBros");
	ScavTrap scav("ScavTrap");
	FragTrap frog("FragTrap");

	ninja1.rangedAttack("Denis");
	ninja1.meleeAttack("Denis");
	ninja1.takeDamage(50);
	ninja1.takeDamage(105);
	ninja1.beRepaired(50);
	ninja1.beRepaired(1050);
	ninja1.ninjaShoebox(scav);
	ninja1.ninjaShoebox(frog);
	ninja1.ninjaShoebox(ninja2);
	ninja1.ninjaShoebox(ninja1);
}
}