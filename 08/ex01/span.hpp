/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:08:40 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/11 13:06:22 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class Span {
	
private:

	std::vector<int> _cont;
	unsigned int _limit;

public:

	class NoMore: public std::exception {
	public:
		NoMore();
		~NoMore();
		char const * what(void) const throw();
	};
	class NoRange: public std::exception {
	public:
		NoRange();
		~NoRange();
		char const * what(void) const throw();
	};
	Span(unsigned int lim);
	Span(Span const & span);
	Span & operator=(Span const & span);
	~Span(void);
	void addNumber(int nbr);
	void addNumber(std::vector<int>::iterator beg,
					std::vector<int>::iterator end);
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);
	
};

#endif