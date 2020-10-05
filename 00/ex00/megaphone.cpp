/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 17:10:28 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/26 17:34:14 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(int ch)
{
	return ((ch >= 97 && ch <= 122) ? ch - 32 : ch);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << ft_toupper(av[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}