/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:59:57 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 14:13:26 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Pony.class.hpp"
#include	<iostream>

Pony::Pony(void)
{
	std::cout << "Enter name: ";
	std::getline(std::cin, this->name, '\n');
	std::cout << "Enter age: ";
	std::getline(std::cin, this->age, '\n');
	std::cout << "Enter gender: ";
	std::getline(std::cin, this->gender, '\n');
	std::cout << "Enter breed: ";
	std::getline(std::cin, this->breed, '\n');
	std::cout << "Enter mother: ";
	std::getline(std::cin, this->mother, '\n');
	std::cout << "Enter father: ";
	std::getline(std::cin, this->father, '\n');
	std::cout << "Enter awards: ";
	std::getline(std::cin, this->awards, '\n');
}

Pony::~Pony(void)
{
}