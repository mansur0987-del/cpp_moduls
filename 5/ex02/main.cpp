/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:09:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 17:01:44 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	a;
	Bureaucrat	b("armaxima", 150);
	Bureaucrat	c(b);
	Bureaucrat	d = c;
	Bureaucrat	e("Boss", 43);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	a++;
	std::cout << "a = " << a << std::endl;
	--a;
	std::cout << "a = " << a << std::endl;
	a--;
	std::cout << "a = " << a << std::endl;

	b--;
	std::cout << "b = " << b << std::endl;
	++b;
	std::cout << "b = " << b << std::endl;
	b++;
	std::cout << "b = " << b << std::endl;

	std::cout << "_________________________" << std::endl;

	PresidentialPardonForm	a_1("President_me");
	RobotomyRequestForm	b_1("Robot_me");
	ShrubberyCreationForm	c_1("Shrubber_me");

	std::cout << "a_1 = " << a_1 << std::endl;
	std::cout << "b_1 = " << b_1 << std::endl;
	std::cout << "c_1 = " << c_1 << std::endl << std::endl;

	a.executeForm(a_1);
	a.signForm(a_1);
	a.executeForm(a_1);
	std::cout << std::endl;

	e.signForm(b_1);
	e.executeForm(b_1);
	e.executeForm(b_1);
	e.executeForm(b_1);
	std::cout << std::endl;

	c.signForm(c_1);
	c.executeForm(c_1);
	std::cout << std::endl;
	a.signForm(c_1);
	a.executeForm(c_1);
	std::cout << "_________________________" << std::endl;

	return (0);
}
