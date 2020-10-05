/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 16:21:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 10:37:48 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	
private:

	std::string const _name;
	int _grade;

public:

	class GradeTooHighException {};
	class GradeTooLowException {};
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & bureau);
	Bureaucrat &operator=(Bureaucrat const & bureau);
	~Bureaucrat(void);
	std::string const getName(void);
	int getGrade(void) const;
	void incGrade(void);
	void decGrade(void);
	void signForm(Form & form);

};

std::ostream &operator<<(std::ostream & out, Bureaucrat & bureau);

#endif