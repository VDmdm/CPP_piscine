/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/11 14:21:55 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/23 18:49:23 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>  {

public:

	MutantStack<T>() {};
	MutantStack<T>(MutantStack const & mut) { 
		*this = mut;
	};
	MutantStack<T> & operator=(MutantStack<T> const & mut) {
		
		std::stack<T>::operator=(mut);
		return (*this);
	};
	virtual ~MutantStack<T>() {};
	class iterator: public std::iterator<std::input_iterator_tag, T> {
	
		private:
			T* ptr;

		public:
			iterator(T* p): ptr(p) {};
			iterator& operator++() { 
				this->ptr += 1;
				return (*this);
			};
			iterator& operator--() {
				this->ptr -= 1;
				return (*this);
			};
			bool operator==(iterator const & other) { 
				return (this->ptr == other.ptr);
			};
			bool operator!=(iterator const & other) {
				return (this->ptr != other.ptr);
			}
			T& operator*() {
				return (*this->ptr);
			}
			T* operator->() {
				return (this->ptr);
			}

	};

	iterator begin() {

		return (iterator(&this->top() - this->size() + 1));
		
	}

	iterator end() {
		
		return (iterator(&this->top() + 1));
	}

};