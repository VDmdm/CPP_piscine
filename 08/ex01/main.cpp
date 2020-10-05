/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 13:00:10 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/11 14:04:27 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void) {
	
	Span a(4);
	Span b(15000);
	srand(time(0));
	std::vector<int> v1;
	std::cout << "Standart test" << std:: endl;
	a.addNumber(10);
	a.addNumber(180);
	a.addNumber(200);
	a.addNumber(15);

	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;

	std::cout << std:: endl << "Add overflow" << std:: endl;
	try 
	{
		Span b(4);
		b.addNumber(10);
		b.addNumber(18);
		b.addNumber(200);
		b.addNumber(11);
		b.addNumber(12);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std:: endl << "Low range test" << std:: endl;
	try
	{
		Span b(4);
		b.addNumber(10);
		std::cout << b.shortestSpan() << std::endl;
		std::cout << b.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	for (int i = 0; i < 15000; i++)
		v1.push_back(rand());
	std::cout << std:: endl << "Iterator add test" << std:: endl;
	b.addNumber(v1.begin(), v1.end());
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	std::cout << std:: endl << "Iterator add overflow test" << std:: endl;
	try 
	{
		b.addNumber(v1.begin(), v1.end());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}