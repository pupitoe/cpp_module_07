/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:28:09 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/21 16:10:44 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
# include <string>

void	iter_int(int& val)
{
	val += 6;
}

void	iter_string(std::string& val)
{
	val += " en fait c'est flo !!!!";
}

int	main(void)
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	
	std::string strs[3] = { "hello comment ca vas ?", "hmmm la journee se pass",
		"ah bon trop dur xDDDD"};

	iter(arr, 10, &ft_print);
	iter(arr, 10, &iter_int);
	std::cout << std::endl;
	iter(arr, 10, &ft_print);
	iter<int>(NULL, 569, NULL);
	std::cout << std::endl;
	iter(strs, 3, &ft_print);
	std::cout << std::endl;
	iter(strs, 3, &iter_string);
	iter(strs, 3, &ft_print);
	return (0);
}
