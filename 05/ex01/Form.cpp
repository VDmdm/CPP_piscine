/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:36:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 19:31:03 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_by_sign, int grade_by_exec):
_name(name), _grade_by_sign(grade_by_sign), _grade_by_exec(grade_by_exec) {

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
	
	(void)form;
	return (*this);
}

Form::~Form(void) {
	
}

bool Form::getSign(void) const {

	return (this->sign);
	
}

std::string Form::getName(void) const {
	
	return (this->_name);
	
}
	
int Form::getGradeSign(void) {
	
	return (this->_grade_by_sign);
}
	
int Form::getGradeExec(void) {
	
	return (this->_grade_by_exec);

}
	
void Form::beSigned(Bureaucrat const & bureau) {

	if (bureau.getGrade() > this->_grade_by_sign)
		throw GradeTooLowException();
	else
		this->sign = true;
	
}

std::ostream &operator<<(std::ostream & out, Form & form) {
	
	out << "Name: " << form.getName() << "| Grade to be signed: "
	<< form.getGradeSign() << "| Grade to be exec: " 
	<< form.getGradeExec() << "| Signed: " << form.getSign() << std::endl;
	return (out);
}