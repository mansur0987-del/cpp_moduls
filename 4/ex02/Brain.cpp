/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:54:12 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 16:52:37 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor default of class Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor of class Brain" << std::endl;
}

Brain::Brain(Brain &other)
{
	std::cout << "Constructor copy of class Brain" << std::endl;
	size_t i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
}

Brain	&Brain::operator=(Brain &other)
{
	std::cout << "Overload assignment of class Brain" << std::endl;
	if (this == &other)
		return (*this);
	size_t i = 0;
	while (i < 100)
	{
		this->ideas[i] = other.ideas[i];
		i++;
	}
	return (*this);
}
