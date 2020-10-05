/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 11:47:15 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/06 15:59:56 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

#include <iostream>

Squad::Squad (void) {

}

Squad::Squad(Squad const & squad) {
	
	*this = squad;

}

Squad & Squad::operator=(Squad const & squad) {
	
	t_unit *lst = squad.stack;
	t_unit *copy = 0;

	this->~Squad();
	this->count = squad.count;
	while (lst)
	{
		if (copy)
		{
			copy->next = new t_unit;
			copy = copy->next;
		}
		else
		{
			copy = new t_unit;
			this->stack = copy;
		}
		copy->unit = lst->unit->clone();
		copy->next = 0;
		lst = lst->next;
	}
	return (*this);
	
}

Squad::~Squad(void) {

	t_unit* tmp;

	while (this->stack)
	{
		tmp = this->stack->next;
		delete this->stack->unit;
		delete this->stack;
		this->stack = tmp;
	}
	this->stack = 0;
	
}

int Squad::getCount(void) const {

	return (this->count);

}

ISpaceMarine* Squad::getUnit(int num) const {

	t_unit* list = this->stack;
	int i = 0;

	if (num < 0 || !list || num > this->count)
		return nullptr;
	while (list && i < num)
	{
		list = list->next;
		i++;
	}
	if (list)
		return (list->unit);
	return (nullptr);
}

int Squad::push(ISpaceMarine* unit) {

	t_unit* list = this->stack;

	if (!list && unit)
	{
		this->stack = new t_unit;
		this->stack->unit = unit;
		this->stack->next = 0;
		this->count++;
		return this->count;
	}
	if (!unit || this->unit_in_list(unit) == true)
		return (this->count);
	while(list->next)
		list = list->next;
	list->next = new t_unit;
	list->next->unit = unit;
	list->next->next = 0;
	this->count++;
	return this->count;
	
}

bool Squad::unit_in_list(ISpaceMarine* unit) {

	t_unit* list = this->stack;

	while (list)
	{
		if (this->stack->unit == unit)
			return true;
		list = list->next;
	}
	return false;
}