/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:00:59 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 19:19:08 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap (T& a, T& b) {

	T tmp = a;
	a = b;
	b = tmp;

}

template <typename T>

T& min(T& a, T& b) {
	
	return (a < b ? a : b);
	
}

template <typename T>

T& max(T& a, T& b) {
	
	return (a > b ? a : b);
	
}

int main(void) {

{
	int ia = 10;
	int ib = 20;

	std::cout << "Swap:" << std::endl;
	std::cout << ia << " " << ib << std::endl;
	::swap(ia, ib);
	std::cout << ia << " " << ib << std::endl;

	std::string sa = "abcde";
	std::string sb = "zxcvb";
		
	std::cout << sa << " " << sb << std::endl;
	::swap(sa, sb);
	std::cout << sa << " " << sb << std::endl;

	void *pa = &sa;
	void *pb = &sb;

	std::cout << pa << " " << pb << std::endl;
	::swap(pa, pb);
	std::cout << pa << " " << pb << std::endl;
}
{
	int ia = 20;
	int ib = 10;

	std::cout << std::endl << "min:" << std::endl;
	std::cout << ia << " " << ib << std::endl;
	std::cout << ::min(ia, ib) << std::endl;

	std::string sa = "abcde";
	std::string sb = "zxcvb";
	
	std::cout << sa << " " << sb << std::endl;
	std::cout << ::min(sa, sb) << std::endl;

	void *pa = &sa;
	void *pb = &sb;

	std::cout << pa << " " << pb << std::endl;
	std::cout << ::min(pa, pb) << std::endl;
}
{
	int ia = 20;
	int ib = 10;

	std::cout << std::endl << "max:" << std::endl;
	std::cout << ia << " " << ib << std::endl;
	std::cout << ::max(ia, ib) << std::endl;

	std::string sa = "abcde";
	std::string sb = "zxcvb";
	
	std::cout << sa << " " << sb << std::endl;
	std::cout << ::max(sa, sb) << std::endl;

	void *pa = &sa;
	void *pb = &sb;

	std::cout << pa << " " << pb << std::endl;
	std::cout << ::max(pa, pb) << std::endl;
}
{
	int a = 2;
	int b = 3;
	std::cout << std::endl << "main from subj:" << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

}