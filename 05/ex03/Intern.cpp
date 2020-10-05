/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 18:16:20 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 19:29:21 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {

}

Intern::Intern(Intern const & intern) {
	
	*this = intern;
	
}

Intern & Intern::operator=(Intern const & intern) {
	
	(void)intern;
	return (*this);

}

Intern::~Intern(void) {
	
}

Form* Intern::makeForm(std::string type, std::string target) {
	
	int i = 0;
	std::string func[3] = {"shrubbery creation",
							"robotomy request",
							"presidential pardon"};

	while (i < 3)
	{
		if (func[i] == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			return (this->*temp[i])(target);
		}
		i++;
	}
	std::cout << "Intern can't create " << type << " because form not found"
												<< std::endl;
	return (nullptr);

}

Form*  Intern::makeShrubbery(std::string target) {
	
	return (new ShrubberyCreationForm(target));

}

Form*  Intern::makeRobotomy(std::string target) {
	
	return (new RobotomyRequestForm(target));

}

Form*  Intern::makePresidental(std::string target) {
	
	return (new PresidentialPardonForm(target));

}
