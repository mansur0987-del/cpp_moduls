/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:21 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 12:09:22 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Constructor default of class Dog" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor of class Dog" << std::endl;
}

Dog::Dog(Dog &other)
{
	std::cout << "Constructor copy of class Dog" << std::endl;
	*this = other;
}

Dog &Dog::operator=(Dog &other)
{
	std::cout << "Overload assignment of class Dog" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "woof woof woof" << std::endl;
}
