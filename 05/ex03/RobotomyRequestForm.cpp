/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:19:54 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 17:58:31 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", 72, 45, target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & robot): 
Form("RobotomyRequestForm", 72, 45, robot.getTarget()) {
	
	*this = robot;

}

RobotomyRequestForm & RobotomyRequestForm::operator=
(RobotomyRequestForm const & robot) {
	
	Form::operator=(robot);
	return (*this);

}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	int i = 0;
	srand(time(0) + this->getName().size());
	Form::execute(executor);
	while (i < 100)
	{
		if (i > rand() % 100 && rand() % 100 < 50)
			throw std::string("robotomized fail");
		std::cout << i << "%: vzh vzh vzh vzh vzh vzh vzh vzh..." << std::endl;
		if (i >= 50)
			break;
		i += 10;
	}
	std::cout << Form::getTarget() << "  has been robotomized successfully!"
									<< std::endl;
}