/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 14:11:04 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:41:53 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "List.hpp"

void	list_del(int index, List *lst)
{
	while (index < 7)
	{
		lst[index] = lst[index + 1];
		index++;
	}
}

void	print_lst_table(int index, List *lst)
{
	int		i;

	i = 0;
	std::cout.setf(std::ios::left);
	std::cout << std::setw(10) << "Index" << '|' << std::setw(10) <<
		"First name" << '|' << std::setw(10) << "Last name" << '|' <<
		std::setw(10) << "nickname" << std::endl;
	while (i < index)
	{
		lst[i].print_list_search(i + 1);
		i++;
	}
}

void	list_search(int index, List *lst)
{
	std::string buff;
	
	if (index == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}
	print_lst_table(index, lst);
	while (std::cout << "Write index of contact to show more information: ")
	{
		std::getline(std::cin, buff, '\n');
		if ((buff.empty() || buff.size() > 1) || (buff.at(0) < 49 ||
			buff.at(0) > (index + 48)))
		{
			std::cout << "Index not found!" << std::endl;
			return ;
		}
		else
		{
			lst[buff.at(0) - 48 - 1].print_list(buff.at(0) - 48);
			return ;
		}
	}
}

int		list_add(int index, List *lst)
{
	std::string buff;

	if (index == 8)
	{
		std::cout << "Sory, phonebook is full. To add a new contact, you\
need to delete one of the contacts. Enter \"yes\" if you want to continue: ";
		std::getline(std::cin, buff, '\n');
		if (buff.compare("yes"))
		{
			std::cout << "Cancel" << std::endl;
			return (index);
		}
		print_lst_table(index, lst);
		std::cout << "Enter index of contact for delete: ";
		std::getline(std::cin, buff, '\n');
		if ((buff.empty() || buff.size() > 1) || (buff.at(0) < 49 ||
			buff.at(0) > (index + 48)))
		{
			std::cout << "Index not found!" << std::endl;
			return (index);
		}
		list_del(buff.at(0) - 49, lst);
		std::cout << "Removal was successful." << std::endl;
		index--;
	}
	lst[index].list_fill();
	if (lst[index].is_empty())
		std::cout << "Contact not added, because nothing to add." << std::endl;
	else
		std::cout << "Contact added successfully!" << std::endl;
		index++;
	return (index);
}

int		main( void )
{
	List		lists[8];
	int			count;
	std::string buff;

	count = 0;
	std::cout << "Welcome to Phonebook-3000!" << std::endl;
	while (std::cout << "Enter command (ADD or SEARCH or EXIT): ")
	{
		std::getline(std::cin, buff, '\n');
		if (!buff.compare("ADD"))
			count = list_add (count, lists);
		else if (!buff.compare("SEARCH"))
			list_search(count, lists);
		else if (!buff.compare("EXIT"))
			break ;
	}
	std::cout << "Bye!" << std::endl;
	return (0);
}