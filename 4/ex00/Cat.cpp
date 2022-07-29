/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 12:09:14 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Constructor default of class Cat" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor of class Cat" << std::endl;
}

Cat::Cat(Cat &other)
{
	std::cout << "Constructor copy of class Cat" << std::endl;
	*this = other;
}

Cat &Cat::operator=(Cat &other)
{
	std::cout << "Overload assignment of class Cat" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}
