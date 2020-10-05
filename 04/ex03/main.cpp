/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:59:38 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 16:09:09 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	AMateria* ice = new Ice();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp = 0;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "Nullptr return: " << src->createMateria("chto?") << std::endl;
	me->equip(ice);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << ice->getXP() << std::endl;
	me->use(2, *bob);
	std::cout << ice->getXP() << std::endl;
	me->use(5, *bob);
	me->use(2, *bob);
	std::cout << ice->getXP() << std::endl;
	me->unequip(2);
	me->use(2, *bob);
	me->unequip(5);
	me->equip(ice);
	me->use(2, *bob);
	std::cout << ice->getXP() << std::endl;
	std::cout << std::endl << "Copy test" << std::endl;
	ICharacter* you = new Character(*(Character *)me);
	delete me;
	you->use(0, *bob);
	you->use(1, *bob);
	you->use(2, *bob);
	you->use(5, *bob);
	you->use(2, *bob);
	std::cout << std::endl << "Assignation test" << std::endl;
	Character he = *(Character *)you;
	delete you;
	he.use(0, *bob);
	he.use(1, *bob);
	he.use(2, *bob);
	he.use(5, *bob);
	he.use(2, *bob);
	delete bob;
	delete src;
	return 0;
}
