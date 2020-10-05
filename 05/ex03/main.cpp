/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:56:32 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 19:27:54 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	Intern someRandomIntern;
	Form* rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	Form* scf = someRandomIntern.makeForm("shrubbery creation", "desert");
	Form* prf = someRandomIntern.makeForm("presidential pardon", "Polly");
	Form* nothing = someRandomIntern.makeForm("abcde", "Polly");
	std::cout << nothing << std::endl;
	Bureaucrat jim("Jim", 1);
	jim.signForm(*rrf);
	jim.signForm(*scf);
	jim.signForm(*prf);
	jim.executeForm(*rrf);
	jim.executeForm(*scf);
	jim.executeForm(*prf);

	delete prf;
	delete scf;
	delete rrf;
	return (0);

}