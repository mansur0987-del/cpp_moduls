/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:56:31 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/20 14:21:13 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(int other)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = other * (1 << this->bits);
}

Fixed::Fixed(float other)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(other * (1 << this->bits));
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
        return *this;
	this->value = other.value;
	return (*this);
}


int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	float tmp;

	tmp = (float)this->value / (float)(1 << this->bits);
	return (tmp);
}

int		Fixed::toInt(void) const
{
	int	tmp;

	tmp = this->value / (1 << this->bits);
	return (tmp);
}

std::__1::ostream	&operator<<(std::__1::ostream &__os, Fixed const &other)
{
	__os << other.toFloat();
	return (__os);
}
