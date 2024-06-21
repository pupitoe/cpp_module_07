/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:13:32 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/21 16:06:20 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, unsigned long long const length, void (*f)(T&))
{
	unsigned long long	i;

	if (array && f)
	{
		i = 0;
		while (i < length)
		{
			(*f)(array[i]);
			i++;
		}
	}
}

template<typename T>
void iter(const T *array, unsigned long long const length, void (*f)(const T&))
{
	unsigned long long	i;

	if (array && f)
	{
		i = 0;
		while (i < length)
		{
			(*f)(array[i]);
			i++;
		}
	}
}

template<typename T> void	ft_print(T& val)
{
	std::cout << val << std::endl;
}

#endif
