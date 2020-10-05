/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:21:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 19:33:30 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):
_name(name) {
	
	if (grade > 150)
		throw GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
	else
		this->_grade = grade;
	
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureau):
_name(bureau._name), _grade(bureau._grade) {
	
	*this = bureau;

}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & bureau) {
	
	(void)bureau;
	return (*this);

}
	
Bureaucrat::~Bureaucrat(void) {
	
}

std::string const Bureaucrat::getName(void) {
	
	return (this->_name);

}

int Bureaucrat::getGrade(void) {
	
	return (this->_grade);

}
	
void Bureaucrat::incGrade(void) {
	
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->_grade--;

}
	
void Bureaucrat::decGrade(void) {
	
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->_grade++;

}

std::ostream &operator<<(std::ostream & out, Bureaucrat & bureau) {
	
	out << bureau.getName() << ", bureaucrat grade "
		<< bureau.getGrade() << std::endl;
	
	return (out);
}