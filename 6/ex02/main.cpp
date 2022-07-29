/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:49:40 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/01 16:43:09 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(0));
	int	i = rand();
	i = i % 3;
	if (i == 0)
	{
		std::cout << "Create new A class!" << std::endl;
		return (new A());
	}
	if (i == 1)
	{
		std::cout << "Create new B class!" << std::endl;
		return (new B());
	}
	if (i == 2)
	{
		std::cout << "Create new C class!" << std::endl;
		return (new C());
	}
	return (0);
}

void	identify(Base *p)
{
	if (dynamic_cast <A*> (p))
		std::cout << "this is A class" << std::endl;
	else if (dynamic_cast <B*> (p))
		std::cout << "this is B class" << std::endl;
	else if (dynamic_cast <C*> (p))
		std::cout << "this is C class" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

void	identify(Base &p)
{
	Base	tmp;

	try
	{
		tmp = dynamic_cast <A&>(p);
		std::cout << "this is A class" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			tmp = dynamic_cast <B&>(p);
			std::cout << "this is B class" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				tmp = dynamic_cast <C&>(p);
				std::cout << "this is C class" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "Error" << std::endl;
			}
		}
	}
}

int	main()
{
	Base	*me;

	me = generate();
	identify(me);
	identify(*me);
	return (0);
}
