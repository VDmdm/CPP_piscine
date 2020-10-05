/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 20:43:25 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 20:55:58 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void) {

	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &link = str;

	std::cout << *ptr << std::endl;
	std::cout << link << std::endl;

	return (0);
}