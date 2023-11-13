/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 07:44:39 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/10/24 08:32:16 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


int	increment(int &x)
{
	return x += 1;
}

int decrement(int &x)
{
	return x -= 1;
}

int main()
{
	int array[] = {1, 2, 3, 4, 5};

	std::cout << "Original array: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Incremented array: ";
	iter(array, 5, increment);
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
	std::cout << "Back to Original array: ";
	iter(array, 5, decrement);
	for (int i = 0; i < 5; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}
