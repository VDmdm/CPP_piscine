/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 15:22:07 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/11 15:45:24 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	std::cout << "Standart method test:" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl; //in stack [5, 17]
	mstack.pop();//in stack [5]
	std::cout << mstack.size() << std::endl;//in stack [5]
	mstack.push(3);//in stack [5, 3]
	mstack.push(5);//in stack [5, 3, 5]
	mstack.push(737);//in stack [5, 3, 5, 737]
	mstack.push(0);//in stack [5, 3, 5, 737, 0]
	std::cout << "Iterator test:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();//in stack [5(it), 3, 5, 737, 0]
	MutantStack<int>::iterator ite = mstack.end();
	++it;//in stack [5, 3(it), 5, 737, 0]
	--it;//in stack [5(it), 3, 5, 737, 0]
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "Copy test:" << std::endl;
	std::cout << "Assign operator:" << std::endl;
	MutantStack<int> mstack2 = mstack;
	MutantStack<int>::iterator it2 = mstack2.begin();//in stack [5(it), 3, 5, 737, 0]
	MutantStack<int>::iterator ite2 = mstack2.end();
	++it2;//in stack [5, 3(it), 5, 737, 0]
	--it2;//in stack [5(it), 3, 5, 737, 0]
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "copy constructor:" << std::endl;
	MutantStack<int> mstack3(mstack);
	MutantStack<int>::iterator it3 = mstack3.begin();//in stack [5(it), 3, 5, 737, 0]
	MutantStack<int>::iterator ite3 = mstack3.end();
	++it3;//in stack [5, 3(it), 5, 737, 0]
	--it3;//in stack [5(it), 3, 5, 737, 0]
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	std::cout << "standart stack constructor:" << std::endl;
	std::stack<int> s(mstack);
	for (int i = 0; i < 5; i++)
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	return (0);
}