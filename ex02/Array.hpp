/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:45:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/21 16:26:22 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <new>
# include <cstring>
# include <stdexcept>

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

		class ExeptionOutOfBound: public std::exception
		{
			public:
				const char *what(void) const throw();
		};
};

template<typename T> Array<T>::Array(void)
{
	this->_array = NULL;
	this->_size = 0;
}

template<typename T> Array<T>::Array(Array<T> const& cpy)
{
	this->_array = NULL;
	this->_size = 0;
	*this = cpy;
	return ;
}

template<typename T> Array<T>& Array<T>::operator=(Array<T> const& cpy)
{
	T				*buffer;
	unsigned int	i;

	buffer = NULL;
	if (cpy._size != 0 && cpy._array)
		buffer = new (std::nothrow) T[cpy._size];
	i = -1;
	if (buffer || cpy._size == 0)
	{
		try //to catch an error if a class throws an exception at copy
		{
			while (++i, i < cpy._size && cpy._array)
				buffer[i] = cpy._array[i];
			if (this->_array)
				delete [] this->_array;
			this->_array = buffer;
			this->_size = cpy._size;
		}
		catch(const std::exception&)
		{
			if (buffer)
				delete [] buffer;
		}
	}
	return (*this);
}

template<typename T> Array<T>::Array(unsigned int const size)
{
	this->_array = NULL;
	this->_size = 0;
	if (size > 0)
		this->_array = new (std::nothrow) T[size];
	if (this->_array)
	{
		std::memset(this->_array, 0, sizeof(T) * size);
		this->_size = size;
	}
}

template<typename T> Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
}

template<typename T> unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T> T& Array<T>::operator[](unsigned int pos) const
{
	if (pos < this->_size && this->_array)
		return (this->_array[pos]);
	else
		throw Array<T>::ExeptionOutOfBound();
}

template<typename T>const char *Array<T>::ExeptionOutOfBound::what(void)
	const throw()
{
	return ("Out of bound");
}

#endif
