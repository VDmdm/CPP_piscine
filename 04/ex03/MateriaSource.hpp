/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:41:07 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 15:15:55 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {

private:
	
	AMateria * inventory[4] = {0};

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & materia);
	MateriaSource & operator=(MateriaSource const & materia);
	~MateriaSource(void);
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
	
};

#endif