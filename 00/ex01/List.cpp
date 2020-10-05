/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 12:59:40 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:41:58 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"List.hpp"

List::List(void)
{
}

void	List::list_fill(void) 
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->first_name, '\n');
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->last_name, '\n');
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->nickname, '\n');
	std::cout << "Enter login: ";
	std::getline(std::cin, this->login, '\n');
	std::cout << "Enter postal address: ";
	std::getline(std::cin, this->postal_addr, '\n');
	std::cout << "Enter email address: ";
	std::getline(std::cin, this->email_addr, '\n');
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->phone, '\n');
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->bday_date, '\n');
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->fav_meal, '\n');
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->uwear_c, '\n');
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->secret, '\n');
}

void	List::print_list_search(int index) 
{
	std::cout.setf(std::ios::left);
	std::cout << std::setw(10) << index << '|';
	std::cout << std::setw(10) <<
				(this->first_name.size() > 10 ?
				this->first_name.substr(0, 9) + '.' :
				this->first_name.substr(0, 10)) << '|';
	std::cout << std::setw(10) <<
				(this->last_name.size() > 10 ?
				this->last_name.substr(0, 9) + '.' :
				this->last_name.substr(0, 10)) << '|';
	std::cout << std::setw(10) <<
				(this->nickname.size() > 10 ?
				this->nickname.substr(0, 9) + '.':
				this->nickname.substr(0, 10)) << std::endl;
	std::cout.unsetf(std::ios::left);
}

int		List::is_empty(void)
{
	return (this->first_name.empty() && this->last_name.empty() &&
			this->nickname.empty() && this->login.empty() &&
			this->postal_addr.empty() && this->phone.empty() &&
			this->bday_date.empty() && this->fav_meal.empty() && 
			this->secret.empty());
}

void	List::print_list(int index)
{
	std::cout << "Index: " << index << std::endl;
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal_addr << std::endl;
	std::cout << "Email address: " << this->email_addr << std::endl;
	std::cout << "Phone number: " << this->phone << std::endl;
	std::cout << "Birthday date: " << this->bday_date << std::endl;
	std::cout << "Favorite meal: " << this->fav_meal << std::endl;
	std::cout << "Unnderwear color: " << this->uwear_c << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}

List::~List(void)
{
}