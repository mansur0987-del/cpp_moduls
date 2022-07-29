/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 23:01:52 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 16:52:22 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : target("Default"), Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : \
	target(other.target), Form(other.Getname(), 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : \
	target(name), Form("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
{
	if (this == &other)
		return (*this);
	this->target = other.target;
	return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
	std::ofstream	NewFile;
	NewFile.open(this->target + "_shrubbery");
	if (NewFile.is_open() == 0)
	{
		throw (ShrubberyCreationForm::FileNotOpen());
		return ;
	}
	NewFile << "      #" << std::endl;
	NewFile << "     ###" << std::endl;
	NewFile << "    #####" << std::endl;
	NewFile << "   #######" << std::endl;
	NewFile << "  #########" << std::endl;
	NewFile << " ###########" << std::endl;
	NewFile << "     ####" << std::endl;
	NewFile << "     ####" << std::endl;
	NewFile.close();
}
