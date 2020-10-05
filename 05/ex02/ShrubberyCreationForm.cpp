/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:19:54 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 12:24:39 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137, target) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrub): 
Form("ShrubberyCreationForm", 145, 137, shrub.getTarget()) {
	
	*this = shrub;

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=
(ShrubberyCreationForm const & shrub) {
	
	Form::operator=(shrub);
	return (*this);

}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	Form::execute(executor);
	std::ofstream out;
	out.open(this->getTarget() + "_shrubbery");
	if (!out.is_open())
		throw std::string("can't open file");
	out << "¨¨¨¨¨¨¨¨¨¨★" << std::endl;
	out << "¨¨¨¨¨¨¨¨¨**" << std::endl;
	out << "¨¨¨¨¨¨¨¨¨*o*" << std::endl;
	out << "¨¨¨¨¨¨¨¨*♥*o*" << std::endl;
	out << "¨¨¨¨¨¨¨***o***" << std::endl;
	out << "¨¨¨¨¨¨**o**♥*o*" << std::endl;
	out << "¨¨¨¨¨**♥**o**o**" << std::endl;
	out << "¨¨¨¨**o**♥***♥*o*" << std::endl;
	out << "¨¨¨*****♥*o**o****" << std::endl;
	out << "¨¨**♥**o*****o**♥**" << std::endl;
	out << "¨******o*****♥**o***" << std::endl;
	out << "****o***♥**o***o***♥ *" << std::endl;
	out << "¨¨¨¨¨____!_!____" << std::endl;
	out << "¨¨¨¨¨\\_________/¨¨" << std::endl;
	out.close();

}