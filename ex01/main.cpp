/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:28:09 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/12 13:12:29 by tlassere         ###   ########.fr       */
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

	iter(arr, 10, &print);
	iter(arr, 10, &iter_int);
	std::cout << std::endl;
	iter(arr, 10, &print);
	iter<int>(NULL, 569, NULL);
	std::cout << std::endl;
	iter(strs, 3, &print);
	std::cout << std::endl;
	iter(strs, 3, &iter_string);
	iter(strs, 3, &print);
	return (0);
}
