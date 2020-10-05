/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialized.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:31:38 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 18:46:07 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.hpp"

void * serialize(void) {

	char * ptr = new char[20];
	
	srand(time(0));
	std::string alphalow =
	"aAbBcCdDeEfFgGhHjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ0123456789";
	for (int i = 0; i < 8; i++)
		ptr[i] = alphalow[rand() % 60];
	*reinterpret_cast<int *>(&ptr[8]) = rand() * (time(0) % 2 ? -1 : 1);
	for (int i = 12; i < 20; i++)
		ptr[i] += alphalow[rand() % 60];
	return (ptr);

}

Data * deserialize(void * raw) {

	Data *ptr = new Data;
	char *tmp = reinterpret_cast<char *>(raw);

	ptr->s1.assign(tmp, 8);
	ptr->s1 += '\0';
	ptr->n = *reinterpret_cast<int *>(tmp + 8);
	ptr->s2.assign(tmp + 12, 8);
	ptr->s2 += '\0';

	return (ptr);
	
}