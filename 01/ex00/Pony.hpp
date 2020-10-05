/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:49:33 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:42:44 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONE_HPP

#include <string>

class Pony {

private:

	std::string name;
	std::string age;
	std::string gender;
	std::string breed;
	std::string mother;
	std::string father;
	std::string awards;

public:

	Pony(void);
	~Pony(void);

};

#endif