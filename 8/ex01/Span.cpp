/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:50:22 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/03 13:57:54 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : len(0)
{
}

Span::Span(unsigned int const len) : len(len)
{
}
Span::Span(Span const &other)
{
	*this = other;
}

Span::~Span()
{
}

Span	&Span::operator=(Span const &other)
{
	if (this == &other)
		return(*this);
	this->len = other.len;
	this->value = other.value;
	return (*this);
}

std::vector<int>	Span::GetValue()
{
	return (this->value);
}

void	Span::addNumber(int const numb)
{
	try
	{
		if (this->len == this->value.size())
			throw Span::TheSizeIsOverflowing();
		this->value.push_back(numb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

unsigned int	Span::shortestSpan()
{
	try
	{
		if (this->len <= 1)
			throw Span::NoNumbersStoredOrOnlyOne();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int>	tmp(this->value);
	std::sort(tmp.begin(), tmp.end());

	unsigned int	i = 1;
	int	shortest = tmp[1] - tmp[0];
	while (i < this->len - 1)
	{
		i++;
		if (tmp[i] - tmp[i - 1] < shortest)
			shortest = tmp[i] - tmp[i - 1];
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	try
	{
		if (this->len <= 1)
			throw Span::NoNumbersStoredOrOnlyOne();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::vector<int>	tmp(this->value);
	std::sort(tmp.begin(), tmp.end());

	int	longest = tmp[this->len - 1] - tmp[0];
	return (longest);
}


std::ostream	&operator<<(std::ostream &os, Span &to_print)
{
	std::vector<int>	tmp = to_print.GetValue();
	std::copy(tmp.begin(), tmp.end(), std::ostream_iterator<int> (os, ", "));
	return (os);
}
