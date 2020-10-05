/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 22:09:47 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 23:43:29 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion: public Enemy {

public:

	RadScorpion(void);
	RadScorpion(RadScorpion const &scorp);
	RadScorpion &operator=(RadScorpion const &scorp);
	~RadScorpion(void);
	void takeDamage(int damage);

};

#endif