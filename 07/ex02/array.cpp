/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 21:00:31 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 22:58:25 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.tpp"

int main() {

	unsigned int index = 3;
	Array <int> a(5);
	std::cout << a[index] << std::endl;
	a[index] = 10;
	std::cout << a[index] << std::endl;
	std::cout << a.size() << std::endl;
	try
	{
		std::cout << a[6] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	Array <std::string> b(5);
	std::cout << b[index] << std::endl;
	b[index] = "ABCDE";
	std::cout << b[index] << std::endl;
	std::cout << b.size() << std::endl;

	Array <double> c(1);
	std::cout << c[0] << std::endl;
	c[0] = 56.43;
	std::cout << c[0] << std::endl;
	std::cout << c.size() << std::endl;

	Array <char *> d;
	try
	{
		std::cout << d[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return(0);
}