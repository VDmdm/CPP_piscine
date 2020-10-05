/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 14:39:42 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 14:59:31 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class IMateriaSource {
	
public:

	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* materia) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};
