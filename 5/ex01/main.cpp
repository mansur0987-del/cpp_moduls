/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:09:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/29 20:34:37 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	a;
	Bureaucrat	b("armaxima", 150);
	Bureaucrat	c(b);
	Bureaucrat	d = c;

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

	Form	a_1;
	Form	b_1("armaxima Form", 12, 14);
	Form	c_1(b_1);
	Form	d_1 = c_1;

	std::cout << "a_1 = " << a_1 << std::endl;
	std::cout << "b_1 = " << b_1 << std::endl;
	std::cout << "c_1 = " << c_1 << std::endl;
	std::cout << "d_1 = " << d_1 << std::endl << std::endl;

	a.signForm(a_1);

	a.signForm(b_1);

	b.signForm(b_1);

	std::cout << "_________________________" << std::endl;

	return (0);
}
