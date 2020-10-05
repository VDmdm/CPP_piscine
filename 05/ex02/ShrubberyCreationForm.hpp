/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:19:57 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 18:20:47 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <string>
#include <fstream>
#include <iostream>

class ShrubberyCreationForm: public Form {

public:

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & shrub);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & shrub);
	~ShrubberyCreationForm(void);
	void execute(Bureaucrat const & executor) const;

};

#endif