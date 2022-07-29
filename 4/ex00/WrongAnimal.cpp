/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:23:11 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/25 20:20:36 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "Constructor default of class WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor of class WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "Constructor copy of class WrongAnimal" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &other)
{
	std::cout << "Overload assignment of class WrongAnimal" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

std::string const &WrongAnimal::getType() const
{
	return (this->type);
}
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
