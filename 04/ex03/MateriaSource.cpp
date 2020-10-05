/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:41:07 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:18:21 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	
}

MateriaSource::MateriaSource(MateriaSource const & materia) {
	
	*this = materia;

}

MateriaSource & MateriaSource::operator=(MateriaSource const & materia) {
	
	int idx = 0;

	this->~MateriaSource();
	while (idx < 4)
	{
		if (materia.inventory[idx])
			this->inventory[idx] = materia.inventory[idx]->clone();
		idx++;
	}
	return (*this);

}

MateriaSource::~MateriaSource(void) {

	int idx = 0;

	while (idx < 4)
	{
		if (this->inventory[idx])
			delete this->inventory[idx];
		idx++;
	}
}

void MateriaSource::learnMateria(AMateria* materia) {
	
	int idx = 0;

	while (idx < 4)
	{
		if (!this->inventory[idx])
		{
			this->inventory[idx] = materia;
			break;
		}
		idx++;
	}
}


AMateria* MateriaSource::createMateria(std::string const & type) {

	int idx = 0;

	while (idx < 4)
	{
		if (this->inventory[idx] && this->inventory[idx]->getType() == type)
			return this->inventory[idx]->clone();
		idx++;
	}
	return nullptr;

};