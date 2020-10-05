/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 20:57:35 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 21:58:09 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human (void) 
{
}

std::string Human::identify(void) const {

	return (this->brain.identify());

}

const Brain& Human::getBrain(void) {

	const Brain& link = this->brain;
	return (link);

}

Human::~Human (void) 
{
}