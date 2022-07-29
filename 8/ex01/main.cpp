/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:25:57 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/03 14:10:47 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int	main()
{
	{
		std::cout << "\t\ttest 1 !" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "___________________________________________" << std::endl;
		std::cout << "\t\ttest 2 !" << std::endl;
		Span	my_test(10000);
		std::srand(std::time(0));
		int i = 0;
		while (i < 10000)
		{
			my_test.addNumber(std::rand());
			i++;
		}
		std::cout << my_test << std::endl;
		std::cout << my_test.shortestSpan() << std::endl;
		std::cout << my_test.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "___________________________________________" << std::endl;
		std::cout << "\t\ttest 3 !" << std::endl;
		Span	my_test(1);
		my_test.addNumber(3);
		my_test.addNumber(340);
		std::cout << my_test << std::endl;
		std::cout << my_test.shortestSpan() << std::endl;
		std::cout << my_test.longestSpan() << std::endl;
	}
	return (0);
}
