/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:32:26 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/31 17:54:46 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &other)
{
	*this = other;
}

Convert::Convert(double arg)
{
	this->arg = arg;
}

Convert	&Convert::operator=(Convert const &other)
{
	if (this == &other)
		return (*this);
	this->arg = other.arg;
	return (*this);
}

double	Convert::Getarg()
{
	return (this->arg);
}

void	Convert::ConvertChar()
{
	if (this->arg < 0 || this->arg > 255)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(this->arg))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast <char> (this->arg) << "'" << std::endl;
}

void	Convert::ConvertInt()
{
	if (this->arg > std::numeric_limits <int>::max() || \
		this->arg < -std::numeric_limits <int>::max() - 1 || \
		this->arg != this->arg)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast <int>(this->arg) << std::endl;
}

void	Convert::ConvertFloat()
{
	if (this->arg == std::numeric_limits <float>::infinity())
		std::cout << "float: inff" << std::endl;
	else if (this->arg == -std::numeric_limits <float>::infinity())
		std::cout << "float: -inff" << std::endl;
	else if (this->arg == std::numeric_limits <float>::signaling_NaN())
		std::cout << "float: nanf" << std::endl;
	else if (this->arg > std::numeric_limits <float>::max() ||
		this->arg < -std::numeric_limits <float>::max() - 1)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast <float> (this->arg) << "f" << std::endl;
}

void	Convert::ConvertDouble()
{
	if (this->arg == std::numeric_limits <double>::infinity())
		std::cout << "double: inf" << std::endl;
	else if (this->arg == -std::numeric_limits <double>::infinity())
		std::cout << "double: -inf" << std::endl;
	else if (this->arg == std::numeric_limits <double>::signaling_NaN())
		std::cout << "double: nan" << std::endl;
	else if (this->arg > std::numeric_limits <double>::max() ||
		this->arg < -std::numeric_limits <double>::max() -1)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << this->arg << std::endl;
}
