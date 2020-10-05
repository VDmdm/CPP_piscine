/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 20:57:35 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 21:44:38 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) 
{
}

std::string Brain::identify(void) const{

	std::stringstream oss;
	oss << this;
	return (oss.str());

}

Brain::~Brain(void) 
{
}