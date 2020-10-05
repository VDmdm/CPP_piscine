/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:38:58 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 13:24:37 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
}