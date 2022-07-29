/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:55:10 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:41:33 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	this->form[0] = "robotomy request";
	this->form[1] = "presidential request";
	this->form[2] = "shrubbery request";

	this->PtrForm[0] = &Intern::CreateRobotomyRequestForm;
	this->PtrForm[1] = &Intern::CreatePresidentialPardonForm;
	this->PtrForm[2] = &Intern::CreateShrubberyCreationForm;
}

Intern::Intern(Intern const &other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(Intern const &other)
{
	if (this == &other)
		return(*this);
	int i = 0;
	while (i < 3)
	{
		this->form[i] = other.form[i];
		this->PtrForm[i] = other.PtrForm[i];
		i++;
	}
	return (*this);
}

Form		*Intern::CreatePresidentialPardonForm(std::string const &target)
{
	Form *tmp;

	tmp = new PresidentialPardonForm(target);
	return (tmp);
}

Form		*Intern::CreateRobotomyRequestForm(std::string const &target)
{
	Form *tmp;

	tmp = new RobotomyRequestForm(target);
	return (tmp);
}

Form		*Intern::CreateShrubberyCreationForm(std::string const &target)
{
	Form *tmp;

	tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

void	Intern::checkForm(std::string const &type)
{
	int	i = 0;
	int	g = 0;
	while (i < 3)
	{
		if (this->form[i] == type)
			g = 1;
		i++;
	}
	if (!g)
		throw(Intern::NoType());
}

Form	*Intern::makeForm(std::string const &type, std::string const &target)
{
	int	i = 0;

	try
	{
		this->checkForm(type);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	while (i < 3)
	{
		if ((this->form)[i] == type)
			return ((this->*PtrForm[i])(target));
		i++;
	}
	return (NULL);
}
