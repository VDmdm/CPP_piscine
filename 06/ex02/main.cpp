/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:15:07 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 18:44:22 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

void identify_from_reference(Base & p) {

	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			B& b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::bad_cast& e)
		{
			C& c = dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
		}
	}
}

void identify_from_pointer(Base * p) {
	
	if(dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else
		std::cout << "C" << std::endl;

}

Base * generate(void) {

	int nbr = rand() % 3;
	if (nbr == 0)
		return new A();
	if (nbr == 1)
		return new B();
	return new C();

}

int main(void) {
	
	srand(time(0));
	std::cout << "Not random:" << std::endl;
	Base * Ac = new A();
	Base * Bc = new B();
	Base * Cc = new C();

	identify_from_pointer(Ac);
	identify_from_pointer(Bc);
	identify_from_pointer(Cc);
	identify_from_reference(*Ac);
	identify_from_reference(*Bc);
	identify_from_reference(*Cc);

	delete Ac;
	delete Bc;
	delete Cc;

	std::cout << std::endl << "Random:" << std::endl;
	Base * one = generate();
	Base * two = generate();
	Base * three = generate();

	identify_from_pointer(one);
	identify_from_pointer(two);
	identify_from_pointer(three);
	identify_from_reference(*one);
	identify_from_reference(*two);
	identify_from_reference(*three);

	delete one;
	delete two;
	delete three;
	
	return(0);
}