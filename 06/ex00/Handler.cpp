/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handler.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 09:48:26 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 16:22:22 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Handler.hpp"

Handler::Handler(std::string data): _data(data) {

	this->nbr = strtod(data.c_str(), 0);
	if (errno)
		this->impos = true;
		
}

Handler::Handler(Handler const& handler) {
		
	*this = handler;

}

Handler & Handler::operator=(Handler const& handler) {
		
	this->nbr = handler.nbr;
	this->_data = handler._data;
	return (*this);
	
}

Handler::~Handler(void) {
		
}

char Handler::dataToChar(void) {
		
	char nbr;

	nbr = static_cast<char>(this->nbr);
	if (this->impos || std::isnan(this->nbr) || 
		this->nbr > 127 || this->nbr < -128 )
		throw std::string("impossible");
	if (!isprint(nbr))
		throw std::string("Non displayable");
	return (nbr);
		
}

int Handler::dataToInt(void) {
		
	int nbr;

	nbr = static_cast<int>(this->nbr);
	if (this->impos || std::isnan(this->nbr) || 
		this->nbr > INT32_MAX || this->nbr < INT32_MIN)
		throw std::string("impossible");
	return (nbr);
}

float Handler::dataToFloat(void) {
		
	float nbr;

	nbr = static_cast<float>(this->nbr);
	if (this->impos || (!std::isinf(this->nbr) && isinff(nbr)))
		throw std::string("impossible");
	if (isnanf(nbr))
		throw std::string("nanf");
	if (isinff(nbr))
		throw (nbr > 0 ? std::string("+inff") : std::string("-inff"));
	return (nbr);
		
}

double Handler::dataToDouble(void) {
		
	if (this->impos)
		throw std::string("impossible");
	if (std::isnan(this->nbr))
		throw std::string("nan");
	if (std::isinf(this->nbr))
		throw (nbr > 0 ? std::string("+inf") : std::string("-inf"));
	return (this->nbr);

}


std::ostream &operator<<(std::ostream & out, Handler & handler){
	
	char nbr;

	out << "char: ";
	try
	{
		nbr = handler.dataToChar();
		out << "\'" << nbr << "\'" << std::endl; 
	}
	catch(std::string &e)
	{
		out << e << std::endl;
	}
	out << "int: ";
	try
	{
		out << handler.dataToInt() << std::endl; 
	}
	catch(std::string &e)
	{
		out << e << std::endl;
	}
	out << "float: ";
	try
	{
		out << std::fixed << std::setprecision(1) << handler.dataToFloat() 
													<< "f" << std::endl; 
	}
	catch(std::string &e)
	{
		out << e << std::endl;
	}
	out << "double: ";
	try
	{
		out << std::fixed << std::setprecision(1) << handler.dataToDouble() 
													<< std::endl; 
	}
	catch(std::string &e)
	{
		out << e << std::endl;
	}
	return (out);
}