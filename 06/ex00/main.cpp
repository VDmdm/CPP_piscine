/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 19:41:37 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 16:01:39 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handler.hpp"

bool		argument_check(std::string & data)
{
	bool sign = false;

	for(char& x: data)
	{
		if ((x >= 9 && x <= 13) || x == 32)
			continue;
		if (!sign && (x == '-' || x == '+'))
		{
			sign = true;
			continue;
		}
		if (x >= 48 && x <= 57)
			return (true);
		break;
	}
	return (false);
}

int			main(int ac, char **av) {

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		exit (0);
	}
	std::string data = av[1];
	for(char& x: data)
		x = tolower(x);
	if (!argument_check(data))
	{
		if (data.compare("nanf") && data.compare("nan") &&
			data.compare("-inf") && data.compare("-inff") &&
			data.compare("+inf") && data.compare("+inff"))
		{
			std::cout << "Wrong argument" << std::endl;
			return (0);
		}
	}
	Handler a(data);
	std::cout << a;
	
	return (0);
	
}