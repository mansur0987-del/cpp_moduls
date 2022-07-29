/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:14:00 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/29 00:27:32 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(1)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name), grade(other.grade)
{
}

Bureaucrat::Bureaucrat(std::string const &other_name, int other_grade) : name(other_name)
{
	try
	{
		if (other_grade < 1)
			throw (Bureaucrat::GradeTooLowException());
		else if (other_grade > 150)
			throw (Bureaucrat::GradeTooHighException());
		else
			this->grade = other_grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	this->grade = other.grade;
	return (*this);
}

Bureaucrat	&Bureaucrat::operator++(void)
{
	try
	{
		if (this->grade + 1 > 150)
			throw (Bureaucrat::GradeTooHighException());
		else
			this->grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (*this);
}

Bureaucrat	Bureaucrat::operator++(int)
{
	Bureaucrat old = *this;
	operator++();
	return (old);
}

Bureaucrat	&Bureaucrat::operator--(void)
{
	try
	{
		if (this->grade - 1 < 1)
			throw (Bureaucrat::GradeTooLowException());
		else
			this->grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (*this);
}

Bureaucrat	Bureaucrat::operator--(int)
{
	Bureaucrat old = *this;
	operator--();
	return (old);
}

const std::string	Bureaucrat::getName() const
{
	return(this->name);
}

int	Bureaucrat::getGrade() const
{
	return(this->grade);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &put)
{
	os << put.getName() << ", bureaucrat grade " << put.getGrade() << ".";
	return (os);
}
