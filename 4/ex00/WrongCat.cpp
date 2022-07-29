/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/25 20:20:57 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Constructor default of class WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of class WrongCat" << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
{
	std::cout << "Constructor copy of class WrongCat" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(WrongCat &other)
{
	std::cout << "Overload assignment of class WrongCat" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}
