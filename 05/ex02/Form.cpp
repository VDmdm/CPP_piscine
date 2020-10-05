/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:36:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 17:44:15 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_by_sign, int grade_by_exec,
std::string target): _name(name), _grade_by_sign(grade_by_sign),
_grade_by_exec(grade_by_exec), _target(target) {

	if (grade_by_sign > 150 || grade_by_exec > 150)
		throw GradeTooLowException();
	else if (grade_by_sign < 1 || grade_by_exec < 1)
		throw GradeTooHighException();
}

Form::Form(Form const & form):
_name(form._name),
_grade_by_sign(form._grade_by_sign),
_grade_by_exec(form._grade_by_exec) {
	
	*this = form;

}

Form & Form::operator=(Form const & form) {
	
	this->_target = form._target;
	return (*this);

}

Form::~Form(void) {
	
}

bool Form::getSign(void) {

	return (this->sign);
	
}

std::string Form::getName(void) const {
	
	return (this->_name);
	
}

std::string Form::getTarget(void) const {
	
	return (this->_target);
	
}
	
int Form::getGradeSign(void) const {
	
	return (this->_grade_by_sign);
}
	
int Form::getGradeExec(void) const {
	
	return (this->_grade_by_exec);

}
	
void Form::beSigned(Bureaucrat const & bureau) {

	if (bureau.getGrade() > this->_grade_by_sign)
		throw GradeTooLowException();
	else
		this->sign = true;
	
}

void Form::execute(Bureaucrat const & executor) const {
	
	if (executor.getGrade() > this->_grade_by_exec && this->sign == false)
		throw std::string("bureaucrat grade is to low and form is unsigned");
	else if (executor.getGrade() > this->_grade_by_exec)
		throw std::string("bureaucrat grade is to low");
	else if (this->sign == false)
		throw std::string("form is unsigned");

}

std::ostream &operator<<(std::ostream & out, Form & form) {
	
	out << "Name: " << form.getName() << "| Grade to be signed: "
	<< form.getGradeSign() << "| Grade to be exec: " 
	<< form.getGradeExec() << "| Signed: " << form.getSign()
	<< "| Target: " << form.getTarget()  << std::endl;
	
	return (out);
}