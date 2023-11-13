/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 19:53:40 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/07 08:19:02 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char **)
{
	Array<int> numbers(0);
	Array<int> morenumbers(33);

	Array<std::string> str_array(10);
	try {
		for (int i = 0; i < 100; i++)
		{
			morenumbers[i] = i;
			std::cout << morenumbers[i] << " ";
		}
	}		
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	for (int i = 0; i < 11; i++)
		str_array[i] = "HELLO ";

	try {
		for (int i = 0; i < 12; i++)
			std::cout << str_array[i];
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}