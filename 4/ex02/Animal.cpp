/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:23:11 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 17:00:08 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Constructor default of class Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor of class Animal" << std::endl;
}

Animal::Animal(Animal &other)
{
	std::cout << "Constructor copy of class Animal" << std::endl;
	this->type = other.type;
}

Animal &Animal::operator=(Animal &other)
{
	std::cout << "Overload assignment of class Animal" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

std::string const &Animal::getType() const
{
	return (this->type);
}

