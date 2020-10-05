/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:22:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 14:03:25 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

private:

	static const int bits = 8;
	int	fpoint_value;

public:

	Fixed(void);
	Fixed(int num);
	Fixed(float num);
	Fixed(Fixed const & fixed);
	Fixed & operator=(Fixed const & fixed);
	~Fixed(void);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

};

std::ostream & operator<<(std::ostream &out, const Fixed &fixed);

#endif