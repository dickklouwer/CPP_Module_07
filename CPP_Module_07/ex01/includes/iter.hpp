/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 07:22:35 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/10/24 08:07:48 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t arr_len, T(*foo)(T &))
{
	if (array == NULL || arr_len == 0)
		return ;
	for (int i = 0; i < arr_len; i++)
		foo(array[i]);
}

#endif