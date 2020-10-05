/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:56:32 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 18:00:09 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	ShrubberyCreationForm form_shrub("Home");
	RobotomyRequestForm form_rob("Zalina");
	PresidentialPardonForm form_pres("George");
	Bureaucrat jim("Jim", 140);
	Bureaucrat jimmie("Jimmie", 50);
	Bureaucrat jeremie("Jeremie", 1);
	/*--------------------------------*/
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << form_shrub;
	std::cout << jim;
	jim.executeForm(form_shrub);
	jim.signForm(form_shrub);
	std::cout << form_shrub;
	jim.executeForm(form_shrub);
	/*--------------------------------*/
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << jimmie;
	jimmie.executeForm(form_shrub);
	jimmie.signForm(form_shrub);
	std::cout << form_shrub;
	jimmie.executeForm(form_shrub);
	/*--------------------------------*/
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << jimmie;
	jimmie.executeForm(form_rob);
	jimmie.signForm(form_rob);
	std::cout << form_rob;
	jimmie.executeForm(form_rob);
	/*-------------------------------*/
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << jeremie;
	jeremie.executeForm(form_rob);
	jeremie.signForm(form_rob);
	/*--------------------------------*/
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << jimmie;
	jimmie.executeForm(form_pres);
	jimmie.signForm(form_pres);
	std::cout << form_pres;
	jimmie.executeForm(form_pres);
	/*--------------------------------*/
	std::cout << std::endl << "----------------------------------------" << std::endl;
	std::cout << jeremie;
	jeremie.executeForm(form_pres);
	jeremie.signForm(form_pres);
	std::cout << form_pres;
	jeremie.executeForm(form_pres);

	return (0);

}