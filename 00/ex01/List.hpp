/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 13:06:29 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:41:47 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
# define LIST_HPP

#include	<string>
#include	<iostream>
#include	<iomanip>

class List {

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_addr;
	std::string email_addr;
	std::string phone;
	std::string bday_date;
	std::string fav_meal;
	std::string uwear_c;
	std::string secret;

public:

	List(void);
	void	list_fill(void);
	void	print_list_search(int index);
	void	print_list(int index);
	int		is_empty(void);
	~List( void );

};

#endif