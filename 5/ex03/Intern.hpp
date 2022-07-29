/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:51:37 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:22:14 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	typedef Form* (Intern::*ptr)(std::string const &);
	ptr			PtrForm[3];
	std::string	form[3];
	Form		*CreatePresidentialPardonForm(std::string const &target);
	Form		*CreateRobotomyRequestForm(std::string const &target);
	Form		*CreateShrubberyCreationForm(std::string const &target);
public:
	Intern();
	Intern(Intern const &other);
	~Intern();

	Intern	&operator=(Intern const &other);

	Form	*makeForm(std::string const &type, std::string const &target);
	void	checkForm(std::string const &type);

	struct	NoType : public std::exception
	{
		const char * what () const throw ()
		{
			return ("No this type");
		}
	};
};


#endif
