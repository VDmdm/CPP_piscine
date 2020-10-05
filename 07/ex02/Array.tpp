/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalvaro <jalvaro@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 21:07:15 by jalvaro           #+#    #+#             */
/*   Updated: 2020/08/10 23:01:35 by jalvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>

class Array {
	
private:

	unsigned int _size;
	T* array;

public:

	class OutOfLimits: public std::exception {
		
	public:

		OutOfLimits() {};
		~OutOfLimits() {};
		char const * what(void) const throw() {

			return ("Out of limits");
			
		}
	};

	Array<T>(void): _size(0), array(0) {};

	Array<T>(unsigned int length) {

		this->_size = length;
		this->array = new T[length]();

	}

	Array<T>(Array<T> const & array): _size(0), array(0) {

		*this = array;

	}

	Array<T> & operator=(Array<T> const & array) {
		
		this->~Array();
		this->_size = array._size;
		if (this->size != 0)
		{
			this->array = new T[array._size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->array[i] = array.array[i];
		}
		return (*this);
		
	}
	~Array<T>(void) {
		
		if (this->array)
			delete [] this->array;

	}
	T & operator[](unsigned int index) {
		
		if (this->_size == 0 || index >= this->_size)
			throw (OutOfLimits());
		return (this->array[index]);

	}

	unsigned int size(void) {

		return (this->_size);
	
	}

};