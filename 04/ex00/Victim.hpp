/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 14:28:44 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 14:49:35 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {

protected:

	std::string name;

public:

	Victim(std::string _name);
	Victim(Victim const & sorc);
	Victim & operator=(Victim const & vict);
	~Victim(void);
	std::string introduce(void) const;
	void getPolymorphed(void) const;
	
};

std::ostream & operator<<(std::ostream &out, const Victim &vict);

#endif