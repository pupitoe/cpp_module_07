/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:13:32 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/12 12:58:08 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *array, unsigned long long length, void (*f)(T&))
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

template<typename T> void	print(T& val)
{
	std::cout << val << std::endl;
}

#endif
