/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 17:36:17 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 10:38:52 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
private:

	bool sign = false;
	std::string const _name;
	int const _grade_by_sign;
	int const _grade_by_exec;

public:

	class GradeTooHighException {};
	class GradeTooLowException {};
	Form(std::string name, int grade_by_sign, int grade_by_exec);
	Form(Form const & form);
	Form & operator=(Form const & form);
	~Form(void);
	bool getSign(void) const;
	std::string getName(void) const;
	int getGradeSign(void);
	int getGradeExec(void);
	void beSigned (Bureaucrat const & bureau);

};

std::ostream &operator<<(std::ostream & out, Form & form);

#endif