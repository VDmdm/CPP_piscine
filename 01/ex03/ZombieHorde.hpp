/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 19:42:53 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:44:56 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <string>
#include "Zombie.hpp"

class ZombieHorde {

private:

	Zombie* horde;
	int		count;

public:
	ZombieHorde(int n);
	void announce(void);
	~ZombieHorde(void);

};

#endif