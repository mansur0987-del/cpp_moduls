/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:21 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 16:53:30 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Constructor default of class Dog" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Destructor of class Dog" << std::endl;
	delete this->brain;
}

Dog::Dog(Dog &other) : Animal(other)
{
	std::cout << "Constructor copy of class Dog" << std::endl;
	this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(Dog &other)
{
	std::cout << "Overload assignment of class Dog" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;
	*this->brain = *(other.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "woof woof woof" << std::endl;
}
