/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 16:53:36 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor default of class Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor of class Cat" << std::endl;
	delete this->brain;
}

Cat::Cat(Cat &other) : Animal(other)
{
	std::cout << "Constructor copy of class Cat" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat &Cat::operator=(Cat &other)
{
	std::cout << "Overload assignment of class Cat" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	*(this->brain) = *(other.brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "meow meow meow" << std::endl;
}
