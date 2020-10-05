/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:19:57 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 18:20:17 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <string>

class RobotomyRequestForm: public Form {

public:

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & robot);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & robot);
	~RobotomyRequestForm(void);
	void execute(Bureaucrat const & executor) const;

};

#endif