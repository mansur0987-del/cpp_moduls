/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 00:21:36 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/29 20:25:48 by armaxima         ###   ########.fr       */
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
			return "Grade Too High Exception";
		}
	};
	struct	GradeTooLowException : public std::exception
	{
		const char * what () const throw ()
		{
			return "Grade Too Low Exception";
		}
	};
	Form();
	Form(Form const &other);
	Form(std::string const name, int grade_to_sign, int grade_to_execute);
	~Form();

	Form				&operator=(Form const &other);
	void				beSigned(Bureaucrat const &bureaucrat);
	bool				Getsign() const;
	std::string const	Getname() const;
	int const			Getgrade_to_sign() const;
	int const			Getgrade_to_execute() const;
};

std::ostream	&operator<<(std::ostream &os, Form const &other);



#endif
