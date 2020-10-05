/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 18:30:35 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 20:08:45 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent (void) {

	this->type = std::string("none");

}

void ZombieEvent::setZombieType (std::string type) {
	
	this->type = type;
	
}

Zombie* ZombieEvent::newZombie (std::string name) {

	Zombie* ptr;
	ptr = new Zombie;
	ptr->Zombie_res(this->type, name);
	
	return (ptr);

}