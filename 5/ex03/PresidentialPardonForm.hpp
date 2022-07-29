/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 22:36:25 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:51:00 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"


class PresidentialPardonForm : public Form
{
private:
	std::string	target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm(std::string const name);
	~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &other);
	virtual void			execute(Bureaucrat const & executor) const;
	virtual std::string		Gettarget() const;
};

#endif
