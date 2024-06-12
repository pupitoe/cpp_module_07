/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:01:32 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/12 11:36:00 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T> void swap(T& a, T& b)
{
	T	buffer;
	buffer = a;
	a = b;
	b = buffer;
}

template<typename T> const T& max(T const& val0, T const& val1)
{
	if (val0 > val1)
		return (val0);
	return (val1);
}

template<typename T> const T& min(T const& val0, T const& val1)
{
	if (val0 < val1)
		return (val0);
	return (val1);
}

#endif
