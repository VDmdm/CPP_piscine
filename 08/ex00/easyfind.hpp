/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 23:06:50 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 23:39:03 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>

typename T::iterator easyfind (T& t, int i) {
	
	typename T::iterator first = t.begin();
	typename T::iterator last = t.end();

	while (first != last)
	{
		if (*first == i)
			return first;
		++first;
	}
	return (last);
	
}