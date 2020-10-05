/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:56:32 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/07 18:58:05 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {

	try
	{
		Form form("Form", 151, 10);
	}
	catch (Form::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Form form("Form", 0, 10);
	}
	catch (Form::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Form form("Form", 1, 0);
	}
	catch (Form::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Form form("Form", 1, 151);
	}
	catch (Form::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Form form("Form", 151, 151);
	}
	catch (Form::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	Form form("Form", 10, 100);
	Bureaucrat jim("Jim", 11);
	std::cout << form;
	std::cout << jim;
	jim.signForm(form);
	std::cout << form;
	Bureaucrat jack("Jack", 1);
	std::cout << form;
	std::cout << jack;
	jack.signForm(form);
	std::cout << form;
	Form govnoform("Govnoform", 10, 100);
	Bureaucrat jimmie("Jimmie", 11);
	std::cout << govnoform;
	std::cout << jimmie;
	jimmie.signForm(form);
	std::cout << govnoform;

	
	return (0);

}