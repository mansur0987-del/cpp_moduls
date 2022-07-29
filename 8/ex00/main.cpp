/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:25:57 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/03 10:47:19 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <forward_list>

int	main()
{
	{
		std::cout << "\t\ttest Vector !" << std::endl;
		std::vector<int>	a(30, 1);
		unsigned int find = 23;

		a[14] = 23;
		a.push_back(5);
		a.push_back(10);
		a.push_back(15);
		a.push_back(20);
		a.push_back(25);

		try
		{
			easyfind(a, find);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		std::cout << std::endl << "\t\ttest list !" << std::endl;
		std::list<int>				b(20, 42);
		std::list<int>::iterator	i = b.begin();
		unsigned int 				find = 10;

		*i = 10;
		i++;
		*i = 15;
		i++;
		*i = 23;

		try
		{
			easyfind(b, find);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << std::endl << "\t\ttest forward_list !" << std::endl;
		std::forward_list<int>					c(10, 42);
		std::forward_list<int>::iterator		i = c.begin();
		unsigned int 							find = 33;

		*i = 22;
		i++;
		*i = 33;
		i++;
		*i = 44;
		try
		{
			easyfind(c, find);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return (0);
}
