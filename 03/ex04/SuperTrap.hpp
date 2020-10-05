/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 22:55:32 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 13:06:33 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap:	virtual public NinjaTrap,
					virtual public FragTrap 
{

public:

	SuperTrap(std::string _name);
	SuperTrap(SuperTrap const & super);
	SuperTrap & operator=(SuperTrap const & super);
	~SuperTrap(void);
	using FragTrap::rangedAttack;
	using NinjaTrap::meleeAttack;

};

#endif