/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:21:36 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:55:57 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
private:
	std::string const	name;
	bool				sign;
	int const			grade_to_sign;
	int const			grade_to_execute;
public:
	struct	GradeTooHighException : public std::exception
	{
		const char * what () const throw ()
		{
			return ("Grade Too High Exception");
		}
	};
	struct	GradeTooLowException : public std::exception
	{
		const char * what () const throw ()
		{
			return ("Grade Too Low Exception");
		}
	};
	struct FormNotSined : public std::exception
	{
		const char * what () const throw ()
		{
			return ("Form Not Sined");
		}
	};

	Form();
	Form(Form const &other);
	Form(std::string const name, int grade_to_sign, int grade_to_execute);
	virtual ~Form() = 0;

	Form				&operator=(Form const &other);
	void				beSigned(Bureaucrat const &bureaucrat);
	bool				Getsign() const;
	std::string const	Getname() const;
	int const			Getgrade_to_sign() const;
	int const			Getgrade_to_execute() const;
	virtual void		execute(Bureaucrat const & executor) const = 0;
	virtual std::string	Gettarget() const = 0;
};

std::ostream	&operator<<(std::ostream &os, Form const &other);



#endif
