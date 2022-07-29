/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:21:41 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 16:33:58 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default"), sign(false), grade_to_sign(1), grade_to_execute(1)
{
}

Form::~Form()
{
}

Form::Form(Form const &other) : name(other.name), \
	grade_to_sign(other.grade_to_sign), grade_to_execute(other.grade_to_execute)
{
}

Form::Form(std::string const name, int grade_to_sign, int grade_to_execute) : \
	name(name), grade_to_sign(grade_to_sign), \
	grade_to_execute(grade_to_execute)
{
	try
	{
		if (grade_to_sign > 150 || grade_to_execute > 150)
			throw (Form::GradeTooHighException());
		else if (grade_to_sign < 1 || grade_to_execute < 1)
			throw (Form::GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form	&Form::operator=(Form const &other)
{
	if (this == &other)
		return (*this);
	this->sign = other.sign;
	return (*this);
}

bool				Form::Getsign() const
{
	return (this->sign);
}

std::string const	Form::Getname() const
{
	return (this->name);
}

int const			Form::Getgrade_to_sign() const
{
	return (this->grade_to_sign);
}

int const			Form::Getgrade_to_execute() const
{
	return (this->grade_to_execute);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->grade_to_sign)
		throw (Form::GradeTooLowException());
	else
		this->sign = true;
}

std::ostream	&operator<<(std::ostream &os, Form const &other)
{
	os << "Form name = " << other.Getname() << ". Grade to sign = " << other.Getgrade_to_sign() << \
	".\nGrade to execute = " << other.Getgrade_to_execute() << ". Sign = " << other.Getsign();
	return (os);
}
