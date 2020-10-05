/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:19:54 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 18:00:44 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5, target) {
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & pardon): 
Form("PresidentialPardonForm", 25, 5, pardon.getTarget()) {
	
	*this = pardon;

}

PresidentialPardonForm & PresidentialPardonForm::operator=
(PresidentialPardonForm const & pardon) {
	
	Form::operator=(pardon);
	return (*this);

}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	Form::execute(executor);
	std::cout << Form::getTarget() << " has been pardoned by Zafod Beeblebrox."
									<< std::endl;
}