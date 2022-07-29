/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:36:32 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:51:07 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm(std::string const name);
	~ShrubberyCreationForm();

	struct FileNotOpen : public std::exception
	{
		const char * what () const throw ()
		{
			return ("File Not Open!");
		}
	};

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &other);
	virtual void			execute(Bureaucrat const & executor)  const;
	virtual std::string		Gettarget() const;
};

#endif
