/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:27:51 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 19:51:04 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void print(T& value) {
	
	std::cout << value << " ";

}

template <typename T>

void iter(T* array, int count, void (func)(T&)) {
	
	for (int i = 0; i < count; i++)
		(func)(array[i]);

}

void print_db(double & db) {
	
	std::cout << db << " ";

}

int main(void) {
	
	char abc[27] = "abcdefghijklmnopqrstuvwxyz";

	::iter(abc, 26, ::print);
	std::cout << std::endl;

	double db[5] = { 15.4, 55.4, 23, 2.9, 10.9};
	::iter(db, 5, ::print);
	std::cout << std::endl;
	::iter(db, 5, print_db);
	std::cout << std::endl;

	std::string str[4] = {"addd", "assss", "ccccd", "wwwww"};
	::iter(str, 4, ::print);
	std::cout << std::endl;

	return (0);
	
}