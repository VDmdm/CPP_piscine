/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 10:19:57 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/08 18:19:46 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>

class PresidentialPardonForm: public Form {

public:

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & pardon);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & pardon);
	~PresidentialPardonForm(void);
	void execute(Bureaucrat const & executor) const;

};

#endif