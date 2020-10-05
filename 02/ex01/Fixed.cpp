/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:22:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 14:33:07 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed (void): fpoint_value(0) {
	
	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed (int num) {

	this->fpoint_value = num << this->bits;
	std::cout << "Int constructor called" << std::endl;

}

Fixed::Fixed (float num) {

	this->fpoint_value = roundf(num * (1 << this->bits));
	std::cout << "Float constructor called" << std::endl;

}

Fixed::Fixed (Fixed const & fixed) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;

}

Fixed & Fixed::operator=(Fixed const & fixed) {

	std::cout << "Assignation operator called" << std::endl;
	this->fpoint_value = fixed.fpoint_value;
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

float Fixed::toFloat(void) const {
	
	return ((float)this->fpoint_value / (1 << this->bits));
}

int Fixed::toInt(void) const {

	return (this->fpoint_value >> this->bits);
	
}

std::ostream & operator<<(std::ostream &out, const Fixed &fixed) {
	
	out << fixed.toFloat();
	return (out);

}