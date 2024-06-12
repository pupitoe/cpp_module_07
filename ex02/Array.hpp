/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:45:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/12 14:03:36 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <new>

# define NULL (void *)0;

template<typename T> class	Array
{
	private:
		T	*_array;
		int _size;

	public:
		Array(void);
		~Array(void);
};

template<typename T> Array<T>::Array(void)
{
	this->_array = NULL;
	this->_size = 0;
}

template<typename T> Array<T>::~Array(void)
{
	if (this->_array)
		delete [] this->_array;
}

#endif
