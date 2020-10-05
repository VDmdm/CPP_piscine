/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:22:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 13:14:19 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void): fpoint_value(0) {
	
	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed (Fixed const & fixed) {
	
	std::cout << "Copy constructor called" << std::endl;
	this->fpoint_value = fixed.getRawBits();

}

Fixed & Fixed::operator=(Fixed const & fixed) {

	std::cout << "Assignation operator called" << std::endl;
	this->fpoint_value = fixed.getRawBits();
	return (*this);
	
}

Fixed::~Fixed (void) {
	
	std::cout << "Destructor called" << std::endl;

}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpoint_value);

}

void Fixed::setRawBits( int const raw ) {

	this->fpoint_value = raw;
	
}