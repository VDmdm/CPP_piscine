/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 14:15:44 by jalvaro           #+#    #+#             */
/*   Updated: 2020/07/31 21:33:33 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string	replace(std::string buff, std::string s1, std::string s2) {

	size_t pos = 0;
	
	while ((pos = buff.find(s1, pos)) != std::string::npos)
		buff.replace(pos, s1.length(), s2);
	return (buff);

}

void		file_write(std::string filename, std::string buff) {
	
	std::ofstream fout;

	fout.open(filename + ".replace");
	if (fout.fail())
	{
		std::cout << "Can't create *.replace file" << std::endl;
		exit (0);
	}
	fout << buff;
	fout.close();
	
}

std::string	file_read(std::string filename, std::string buff) {
	
	std::ifstream fin(filename);
	std::string append;

	if (fin.fail())
	{
		std::cout << "Can't open file" << std::endl;
		exit (0);
	}
	while (std::getline(fin, append) && !fin.eof()) {
		buff += append + '\n';
	}
	buff += append;
	fin.close();
	return (buff);
	
}

int			main(int ac, char **av) {

	std::string fname;
	std::string buff;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		exit (0);
	}
	if (av[2][0] == 0 || av[3][0] == 0)
	{
		std::cout << "String is empty" << std::endl;
		exit (0);
	}
	buff = file_read(av[1], buff);
	buff = replace(buff, av[2], av[3]);
	file_write(av[1], buff);
	return(0);
}