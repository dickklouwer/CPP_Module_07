/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:18:55 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/10/19 08:48:37 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
	// Testing with int
	int a = 10, b = 20;
	std::cout << "Initial values: a = " << a << ", b = " << b << std::endl;
	swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min: " << ::min(a, b) << std::endl;
	std::cout << "Max: " << ::max(a, b) << std::endl;

	std::cout << "--------------------------" << std::endl;

	// Testing with double
	double c = 5.5, d = 3.3;
	std::cout << "Initial values: c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "Min: " << ::min(c, d) << std::endl;
	std::cout << "Max: " << ::max(c, d) << std::endl;

	std::cout << "--------------------------" << std::endl;

	// Testing with std::string
	std::string e = "apple", f = "banana";
	std::cout << "Initial values: e = " << e << ", f = " << f << std::endl;
	swap(e, f);
	std::cout << "After swap: e = " << e << ", f = " << f << std::endl;
	std::cout << "Min: " << ::min(e, f) << std::endl;
	std::cout << "Max: " << ::max(e, f) << std::endl;

	return 0;
}
