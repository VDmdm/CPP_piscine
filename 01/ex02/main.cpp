/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 18:37:42 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 19:28:25 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>
#include <ctime>

Zombie* randomChump(ZombieEvent zombie_creator) {
	
	Zombie* ptr;

	srand(time(0));
	std::string names[10] = { "Shon", "John", "Alina", "Svetlana", "Jane",
								"Sergio", "Obama", "Puhlij", "Danom", "Jack"};
	ptr = zombie_creator.newZombie(names[rand() % 10]);
	ptr->announce();
	return (ptr);

}

int		main(void) {

	int i = 0;
	ZombieEvent zombie_creator;
	Zombie* zomb_ptr[4];

	zombie_creator.setZombieType("undead");
	zomb_ptr[0] = zombie_creator.newZombie("Newbee");
	zomb_ptr[0]->announce();
	zombie_creator.setZombieType("unknown");
	zomb_ptr[1] = zombie_creator.newZombie("Junior");
	zomb_ptr[1]->announce();
	zomb_ptr[2] = randomChump(zombie_creator);
	zombie_creator.setZombieType("family");
	zomb_ptr[3] = zombie_creator.newZombie("Mishel");
	zomb_ptr[3]->announce();
	while(i < 4)
		delete zomb_ptr[i++];
	return (0);
}