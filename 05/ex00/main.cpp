/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:56:32 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 19:33:47 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {

	try
	{
		Bureaucrat jim("Jim", 1);
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Bureaucrat jim("Jim", 0);
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Bureaucrat jim("Jim", 150);
		std::cout << jim;
		jim.decGrade();
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	try
	{
		Bureaucrat jim("Jim", 3);
		std::cout << jim;
		jim.incGrade();
		std::cout << jim;
		jim.incGrade();
		std::cout << jim;
		jim.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}
	return (0);

}