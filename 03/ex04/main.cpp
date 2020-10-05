/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:38:58 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 13:17:24 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main (void) {
	SuperTrap a("Hi");
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
	NinjaTrap ninja2("NinjaBros");
	ScavTrap scav("ScavTrap");
	FragTrap frog("FragTrap");

	a.rangedAttack("Denis");
	a.meleeAttack("Denis");
	a.takeDamage(50);
	a.takeDamage(105);
	a.beRepaired(50);
	a.beRepaired(1050);
	a.ninjaShoebox(scav);
	a.ninjaShoebox(frog);
	a.ninjaShoebox(ninja2);
}