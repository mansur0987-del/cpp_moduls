/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:43:30 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/02 13:47:55 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T	*array, unsigned long len, void (*f)(T &))
{
	unsigned long i;

	i = 0;
	while (i < len)
	{
		f(array[i]);
		i++;
	}
}

#endif
