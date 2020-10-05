/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 14:20:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 16:03:50 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void) {
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	std::cout << vlc->push(0) << std::endl;
	std::cout << vlc->push(bob) << std::endl;
	std::cout << vlc->push(bob) << std::endl;
	std::cout << vlc->push(jim) << std::endl;
	std::cout << vlc->push(jim->clone()) << std::endl;
	std::cout << vlc->push(bob->clone()) << std::endl;
	std::cout << vlc->getUnit(-1) << std::endl;
	std::cout << vlc->getUnit(4) << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << "Copy test" << std::endl;
	ISquad* vlc2 = new Squad(*(Squad *)vlc);
	Squad vlc3 = *(Squad *)vlc;
	delete vlc;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << std::endl << "Assignation test" << std::endl;
	vlc3 = *(Squad *)vlc2;
	delete vlc2;
	for (int i = 0; i < vlc3.getCount(); ++i)
	{
		ISpaceMarine* cur = vlc3.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	return 0;
}
}