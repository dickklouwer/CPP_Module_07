/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 19:49:05 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/10/26 13:49:07 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array 
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array() 
		{
			this->_array = new T;
		}
		
		Array(unsigned int n) : _size(n) 
		{
			this->_array = new T[_size];	
		}
		
		Array& operator=(const Array& other) 
		{
			if (this->_array != NULL)
				delete _array;
			if (other._size != 0)
			{
				_size = other._size;
				_array = new T[_size];
				for (int i = 0; i < this->_size; i++) 
					this->_array[i] = other._array[i];
			}
			return (*this);
		}

		Array(const Array& other) 
		{
			_size = other._size;
			_array = new T[_size];
			for (int i = 0; i < this->_size; i++)
			{
				this->_array[i] = other._array[i];
			}
		}

		T& operator[](int index) {
			if (index < 0 || index > _size)
				throw std::out_of_range("Index range out of bounds ..");
			return (_array[index]);	
		}
	
		~Array() 
		{
			delete[] _array;
		}
		
		T size(void)
		{
			return this->_size ;
		}
};

#endif