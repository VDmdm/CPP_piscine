/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 22:09:47 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 12:55:47 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant: public Enemy {

public:

	SuperMutant(void);
	SuperMutant(SuperMutant const &mutant);
	SuperMutant &operator=(SuperMutant const &mutant);
	~SuperMutant(void);
	void takeDamage(int damage);

};

#endif