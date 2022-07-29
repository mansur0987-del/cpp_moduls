/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:31:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/02 10:56:02 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	&min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T const	&min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T>
T const	&max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
