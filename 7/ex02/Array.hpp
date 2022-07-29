/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:43:30 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/02 17:24:29 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template <class T>
class Array
{
private:
	unsigned int	len;
	T				*array;
public:
	Array();
	Array(unsigned int len);
	Array(Array<T> const &other);
	~Array();

	Array<T>	&operator=(Array<T> const &other);
	T			&operator[](unsigned int i);

	class  IndexIsOutOfBounds : public std::exception
	{
		const char * what () const throw ()
		{
			return "Index Is Out Of Bounds!";
		}
	};

	unsigned int	size();
};

#include "Array.tpp"


#endif
