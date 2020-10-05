/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 16:42:16 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:44:04 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent {

private:

	std::string type;

public:

	ZombieEvent (void);
	void setZombieType (std::string type);
	Zombie* newZombie (std::string name);
};

#endif