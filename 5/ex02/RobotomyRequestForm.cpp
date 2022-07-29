/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:58:27 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 16:44:10 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

bool	RobotomyRequestForm::success = true;

RobotomyRequestForm::RobotomyRequestForm() : target("Default"), Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : \
	target(other.target), Form(other.Getname(), 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const name) : \
	target(name), Form("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
	if (this == &other)
		return (*this);
	this->success = other.success;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->Getsign() == false)
	{
		throw (Form::FormNotSined());
		return ;
	}
	if (executor.getGrade() > this->Getgrade_to_execute())
	{
		throw (Form::GradeTooLowException());
		return ;
	}
	if (this->success == true)
	{
		std::cout << this->target << " has been robotomized successfully." << std::endl;
		RobotomyRequestForm::success = false;
	}
	else
	{
		std::cout << this->target << " NOT has been robotomized." << std::endl;
		RobotomyRequestForm::success = true;
	}
}
