/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:28:44 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 20:07:08 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::Zombie_res (std::string type, std::string name){

	this->name = name;
	this->type = type;
	
}

void Zombie::announce(void) {

	std::cout << "<" + name << "(" + type + ")> " << "Braiiiiiiinnnssss..."
				<< std::endl;
	
}