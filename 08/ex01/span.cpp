/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 12:08:09 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/11 14:01:39 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::NoRange::NoRange() {
	
}

Span::NoRange::~NoRange() {
	
}

Span::NoMore::NoMore() {

}

Span::NoMore::~NoMore() {
	
}

char const * Span::NoMore::what(void) const throw() {

	return ("Can't add more elems (full)");

}

char const * Span::NoRange::what(void) const throw() {

	return ("No range to find");

}

Span::Span(unsigned int lim): _limit(lim) {

}

Span::Span(Span const & span) {
	
	*this = span;

}

Span & Span::operator=(Span const & span) {
	
	this->_limit = span._limit;
	this->_cont = span._cont;
	return (*this);

}

Span::~Span(void) {

}

void Span::addNumber(int nbr) {
	
	if(this->_cont.size() == this->_limit)
		throw NoMore();
	this->_cont.push_back(nbr);
	std::sort(this->_cont.begin(), this->_cont.end());
}

void Span::addNumber(std::vector<int>::iterator beg,
std::vector<int>::iterator end) {

	for(std::vector<int>::iterator it = beg; it != end; ++it)
	{
		if (this->_cont.size() == this->_limit)
			throw NoMore();
		this->_cont.push_back(*it);
	}
	std::sort(this->_cont.begin(), this->_cont.end());
}

unsigned int Span::shortestSpan(void) {

	unsigned int cmp = 0;
	unsigned int res = 0;
	if (this->_cont.size() < 2)
		throw (NoRange());
	for (std::vector<int>::iterator it = this->_cont.begin() + 1;
								it != this->_cont.end();  ++it )
	{
    	if ((cmp = *it - *(it - 1)))
		{
			res == 0 ? res = cmp : 0;
			cmp < res ? res = cmp : 0;
		}
		else
			return (0);
	}
	return (res);

}

unsigned int Span::longestSpan(void) {

	if (this->_cont.size() < 2)
		throw (NoRange());
	return (this->_cont.back() - this->_cont.front());
	
}