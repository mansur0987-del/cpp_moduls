/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 23:09:24 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/29 00:26:23 by armaxima         ###   ########.fr       */
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
	std::cout << "d = " << d << std::endl << std::endl;

	a++;
	std::cout << "a = " << a << std::endl;
	--a;
	std::cout << "a = " << a << std::endl;
	a--;
	std::cout << "a = " << a << std::endl << std::endl;

	b--;
	std::cout << "b = " << b << std::endl;
	++b;
	std::cout << "b = " << b << std::endl;
	b++;
	std::cout << "b = " << b << std::endl << std::endl;
	return (0);
}
