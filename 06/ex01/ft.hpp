/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 16:30:18 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 17:54:26 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HPP
#define FT_HPP

#include <string>
#include <iostream>

struct Data {
	
	std::string s1;
	int n;
	std::string s2;
	
};

void * serialize(void);
Data * deserialize(void * raw);

#endif