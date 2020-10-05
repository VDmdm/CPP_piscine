/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:16:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 19:15:43 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

private:

	Form* (Intern::*temp[3])(std::string) {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidental
	};
	
public:
	
	Intern(void);
	Intern(Intern const & intern);
	Intern & operator=(Intern const & intern);
	~Intern(void);
	Form* makeForm(std::string type, std::string target);
	Form* makeShrubbery(std::string target);
	Form* makeRobotomy(std::string target);
	Form* makePresidental(std::string target);

};

#endif