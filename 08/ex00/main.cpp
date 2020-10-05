/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 23:06:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 23:42:41 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main(void) {
	
	std::list<int> lst;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);
	std::list<int>::iterator res = easyfind(lst, 20);
	if (lst.end() == res)
		std::cout << "Not Found!" << std::endl;
	else
		std::cout << *res << std::endl;

	res = easyfind(lst, 0);
	if (lst.end() == res)
		std::cout << "Not Found!" << std::endl;
	else
		std::cout << *res << std::endl;
	return (0);

}