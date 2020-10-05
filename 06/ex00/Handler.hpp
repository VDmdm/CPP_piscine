/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handler.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 09:48:26 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 15:10:31 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

class Handler {

private:

	std::string _data;
	long double nbr;
	bool impos;

public:

	Handler(std::string data);
	Handler(Handler const& handler);
	Handler & operator=(Handler const& handler);
	~Handler(void);
	char dataToChar(void);
	int dataToInt(void);
	float dataToFloat(void);
	double dataToDouble(void);

};

std::ostream &operator<<(std::ostream & out, Handler & handler);

#endif