/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:45:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/12 20:22:03 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <new>
# include <cstring>
# include <stdexcept>

# define NULL (void *)0;

template<typename T> class	Array
{
	private:
		T			*_array;
		unsigned int _size;

	public:
		Array(void);
		~Array(void);
		Array(unsigned int const size);
		Array(Array<T> const& cpy);
		Array&	operator=(Array<T> const& cpy);
		
		unsigned int	size(void) const;
		T& operator[](unsigned int pos) const;

		class ExeptionOutOfBand: public std::exception
		{
			public:
				const char *what(void) const throw();
		}
};

template<typename T> Array<T>::Array(void)
{
	this->_array = NULL;
	this->_size = 0;
}

template<typename T> Array<T>::Array(Array<T> const& cpy)
{
	*this = cpy;
	this->_array = NULL;
	this->_size = 0;
	return ;
}

template<typename T> Array<T>& Array<T>::operator=(Array<T> const& cpy)
{
	T				*buffer;

	buffer = new (std::nothrow) T[cpy._size];
	if (buffer)
	{
		std::memcpy(buffer, cpy._array, sizeof(T) * cpy._size);
		if (this->_array)
			delete [] this->_array;
		this->_array = buffer;
		this->_size = cpy._size;
	}
	return (*this);
}

template<typename T> Array<T>::Array(unsigned int const size)
{
	this->_array = new (std::nothrow) T[size];
	if (this->_array)
	{
		std::memset(this->_array, 0, sizeof(T) * size);
		this->_size = size;
	}
	else
		this->_size = 0;
}

template<typename T> Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
}

template<typename T> unsigned int Array<T>::size(void) const
{
	return (this->size);
}

template<typename T> T& Array<T>::operator[](unsigned int pos) const
{
	if (pos < this->_size)
		return (this->_array[pos]);
	else
		throw this->ExeptionOutOfBand();
}



#endif
