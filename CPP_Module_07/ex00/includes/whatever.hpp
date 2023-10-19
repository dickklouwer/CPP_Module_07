/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Template.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 08:18:52 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/10/19 08:39:43 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

/*	In C++, templates allow functions and classes to operate with generic types.
	This enables a function or a class to accept arguments of various types,
	without having to rewrite the entire code for each type.
 */

/*	When working with templates, the definition of the template has to be in the 
	same file as the declaration due to the way the compiler handles instantiation.
 */
template <typename T>
void	swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	min(T x, T y)
{
	return (x >= y ? y : x);
}

template <typename T>
T	max(T x, T y)
{
	return (x <= y? y : x);
}

#endif