/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:42:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 20:35:12 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>

ZombieHorde::ZombieHorde (int n) {

	if (n <= 0)
	{
		std::cout << "You create broken horde. Please, don't use her"
														<< std::endl;
	}
	this->count = n;
	this->horde = new Zombie[n];
	std::string names[10] = { "Shon", "John", "Alina", "Svetlana", "Jane",
								"Sergio", "Obama", "Puhlij", "Danom", "Jack"};
	while (--n != -1)
	{
		srand(n);
		this->horde[n].Zombie_res("horde", names[rand() % 10]);
	}
}

void ZombieHorde::announce(void) {
	
	int i = 0;
	while (i < this->count)
		this->horde[i++].announce();

}

ZombieHorde::~ZombieHorde (void) {
	
	delete [] this->horde;

}