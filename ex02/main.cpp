/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:45:16 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/20 17:35:07 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Array<int> hello;
	Array<double> bonjour(10);
	Array<std::string> bijour(3);

	try
	{
		std::cout << "hello size " << hello.size() << std::endl;
		std::cout << hello[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "bonjour[0] " << bonjour[0] << std::endl;
		bonjour[0] = 10998.42;
		std::cout << "bonjour[0] " << bonjour[0] << std::endl;
		bonjour[9] = 69.69;
		std::cout << "bonjour[9] " << bonjour[9] << std::endl;
		std::cout << "bonjour size " << bonjour.size() << std::endl;
		bonjour[10];
		std::cout << "Bonjour" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "bijour[0] " << bijour[0] << std::endl;
		bijour[0] = "comment tu vas ?";
		std::cout << "bijour[0] " << bijour[0] << std::endl;
		bijour[1] = "abricot";
		bijour[2] = "gotique";
		std::cout << "bijour[1] " << bijour[1] << std::endl;
		std::cout << "bijour[2] " << bijour[2] << std::endl;
		std::cout << "bijour size " << bijour.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
