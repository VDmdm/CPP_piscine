/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:22:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/01 12:42:45 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

private:

	static const int bits = 8;
	int	fpoint_value;

public:

	Fixed(void);
	Fixed(Fixed const & fixed);
	Fixed & operator=(Fixed const & fixed);
	~Fixed(void);
	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

#endif