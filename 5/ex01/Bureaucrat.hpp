/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:14:05 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/29 20:26:05 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Bureaucrat;
class Form;

class Bureaucrat
{
private:
	std::string	const name;
	int			grade;
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
	Bureaucrat();
	Bureaucrat(Bureaucrat &other);
	Bureaucrat(std::string const &other_name, int other_grade);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat &other);
	Bureaucrat&	operator++(void);
	Bureaucrat	operator++(int);
	Bureaucrat&	operator--(void);
	Bureaucrat	operator--(int);

	const std::string	getName() const;
	int					getGrade() const;
	void				signForm(Form &form);


};

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &put);



#endif
