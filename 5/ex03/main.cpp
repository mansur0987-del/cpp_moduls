/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:09:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/30 19:56:14 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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
	std::cout << "e = " << d << std::endl;

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

	Intern	intern;
	Form	*someRandomIntern;
	someRandomIntern = intern.makeForm("presidential request", "1111");
	std::cout << *someRandomIntern << " target = " << someRandomIntern->Gettarget() << std::endl << std::endl;
	delete someRandomIntern;

	someRandomIntern = intern.makeForm("robotomy request", "2222");
	std::cout << *someRandomIntern << " target = " << someRandomIntern->Gettarget() <<  std::endl << std::endl;
	delete someRandomIntern;

	someRandomIntern = intern.makeForm("shrubbery request", "3333");
	std::cout << *someRandomIntern << " target = " << someRandomIntern->Gettarget() << std::endl << std::endl;
	delete someRandomIntern;


	someRandomIntern = intern.makeForm("qwewqe request", "232");

	std::cout << "_________________________" << std::endl;

	return (0);
}
