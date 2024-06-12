/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:00:22 by tlassere          #+#    #+#             */
/*   Updated: 2024/06/12 11:44:53 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	
	float flo = 700120.555f;
	float corneille = 69.69f;
	std::cout << "flo = " << flo << ", corneille = " << corneille << std::endl;
	swap(flo, corneille);
	std::cout << "flo = " << flo << ", corneille = " << corneille << std::endl;
	std::cout << "min( flo, corneille ) = "
		<< ::min( flo, corneille ) << std::endl;
	std::cout << "max( flo, corneille ) = "
		<< ::max( flo, corneille ) << std::endl;
	corneille = 69.69f;
	std::cout << "flo = " << flo << ", corneille = " << corneille << std::endl;
	std::cout << "max( flo, corneille ) = "
		<< ::max( flo, corneille ) << std::endl;
	return (0);
}
