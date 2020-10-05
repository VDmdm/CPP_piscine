/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:40:15 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/02 22:25:49 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy {
	
private:

	std::string _type;
	int _hp;

public:

	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &enemy);
	Enemy &operator=(Enemy const &enemy);
	virtual ~Enemy(void);
	std::string const getType(void) const;
	int getHP(void) const;
	virtual void takeDamage(int damage);

};

#endif