/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 17:38:58 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 18:46:55 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main (void) {

	FragTrap a("ClapTrap");
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
	return (0);

}