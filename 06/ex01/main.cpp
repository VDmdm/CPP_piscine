/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:29:47 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 17:50:57 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.hpp"

int		main(void) {

	void * vptr = serialize();
	Data * ptr = deserialize(vptr);

	std::cout << ptr->s1 << " " << ptr->n << " " << ptr->s2 << std::endl;

	delete reinterpret_cast<char *>(vptr);
	delete ptr;
	return (0);
}