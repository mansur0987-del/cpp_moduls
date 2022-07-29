/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:46:01 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 16:37:32 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("Default"), Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other) : \
	target(other.target), Form(other.Getname(), 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const name) : \
	target(name), Form("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
	if (this == &other)
		return (*this);
	this->target = other.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->Getsign() == false)
	{
		throw (Form::FormNotSined());
		return ;
	}
	if (executor.getGrade() > this->Getgrade_to_execute())
		throw (Form::GradeTooLowException());
	else
		std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
