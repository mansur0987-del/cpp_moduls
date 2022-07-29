/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:36:30 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:51:03 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target;
	static bool		success;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &other);
	RobotomyRequestForm(std::string const name);
	~RobotomyRequestForm();

	RobotomyRequestForm	&operator=(RobotomyRequestForm const &other);
	virtual void		execute(Bureaucrat const & executor)  const;
	virtual std::string	Gettarget() const;

};

#endif
