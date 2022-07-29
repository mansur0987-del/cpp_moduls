/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:56:31 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/20 16:17:11 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &other)
{
	*this = other;
}

Fixed::Fixed(int other)
{
	this->value = other * (1 << this->bits);
}

Fixed::Fixed(float other)
{
	this->value = (int)roundf(other * (1 << this->bits));
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	if (this == &other)
        return *this;
	this->value = other.value;
	return (*this);
}

bool	Fixed::operator>(Fixed const &other)
{
	if (this->value > other.getRawBits())
		return(true);
	else
		return(false);
}

bool	Fixed::operator<(Fixed const &other)
{
	if (this->value < other.getRawBits())
		return(true);
	else
		return(false);
}

bool	Fixed::operator>=(Fixed const &other)
{
	if (this->value >= other.getRawBits())
		return(true);
	else
		return(false);
}

bool	Fixed::operator<=(Fixed const &other)
{
	if (this->value <= other.getRawBits())
		return(true);
	else
		return(false);
}

bool	Fixed::operator==(Fixed const &other)
{
	if (this->value == other.getRawBits())
		return(true);
	else
		return(false);
}

bool	Fixed::operator!=(Fixed const &other)
{
	if (this->value != other.getRawBits())
		return(true);
	else
		return(false);
}

Fixed	Fixed::operator+(Fixed const &other)
{
	Fixed a(this->toFloat() + other.toFloat());
	return (a);
}

Fixed	Fixed::operator-(Fixed const &other)
{
	Fixed a(this->toFloat() - other.toFloat());
	return (a);
}

Fixed	Fixed::operator*(Fixed const &other)
{
	Fixed a(this->toFloat() * other.toFloat());
	return (a);
}

Fixed	Fixed::operator/(Fixed const &other)
{
	Fixed a(this->toFloat() / other.toFloat());
	return (a);
}

Fixed	&Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return (old);
}

int		Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (a);
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	else
		return (a);
}


std::__1::ostream	&operator<<(std::__1::ostream &__os, Fixed const &other)
{
	__os << other.toFloat();
	return (__os);
}
