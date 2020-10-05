/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 14:03:01 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/29 14:13:11 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.class.hpp"

void	ponyOnTheHeap(void)
{
	Pony *ptr = new Pony;
	delete ptr;
}

void	ponyOnTheStack(void)
{
	Pony pony;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}