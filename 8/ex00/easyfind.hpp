/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:22:09 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/03 10:40:17 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>


class  NotFind : public std::exception
{
	const char * what () const throw ()
	{
		return "Not Find!";
	}
};

template <typename T>
void	easyfind(T &container, unsigned int const find)
{
	typename T::iterator result;

	result = std::find(container.begin(), container.end(), find);
	if (result == container.end())
		throw NotFind();
	std::cout << "value is find! value = " << *result << std::endl;
}

#endif
