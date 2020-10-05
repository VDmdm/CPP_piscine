/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 21:40:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/03 15:36:37 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _type(type), _hp(hp) {
	
}

Enemy::Enemy(Enemy const & enemy) {
	
	*this = enemy;

}

Enemy & Enemy::operator=(Enemy const & enemy) { 
	
	this->_type = enemy._type;
	this->_hp = enemy._hp;
	return (*this);
	
}

Enemy::~Enemy(void) {
	
}

std::string const Enemy::getType(void) const {

	return (this->_type);

}
	
int Enemy::getHP(void) const {

	return (this->_hp);
	
}
	
void Enemy::takeDamage(int damage) {

	if (damage < 0)
		return ;
	if (damage <= this->_hp)
		this->_hp -= damage;
	else
		this->_hp = 0;

}