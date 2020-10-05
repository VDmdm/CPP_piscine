/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:05:49 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:33:00 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main(void)
{
	Character* me = new Character("me");
	Character you = *me;
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	Character i(*me);
	you.equip(pf);
	std::cout << *me;
	std::cout << i;
	std::cout << you;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	Enemy* d = new RadScorpion(*(RadScorpion *)b);
	me->attack(b);
	std::cout << *me;
	me->attack(d);
	std::cout << *me;
	me->equip(pf);
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	delete me;
	delete pf;
	delete pr;
	return 0;
}