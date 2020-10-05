/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 15:54:14 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 12:58:32 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {

public:

	FragTrap(std::string _name);
	FragTrap(FragTrap const & frag);
	FragTrap & operator=(FragTrap const & frag);
	~FragTrap(void);
	void vaulthunter_dot_exe(std::string const & target); 

};

#endif