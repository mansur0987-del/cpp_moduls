/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:55:38 by armaxima          #+#    #+#             */
/*   Updated: 2022/06/01 15:39:22 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	name;
	int			numb;
};

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	a;

	a = reinterpret_cast<uintptr_t>(ptr);
	return (a);
}

Data* deserialize(uintptr_t raw)
{
	Data	*a;

	a = reinterpret_cast<Data*>(raw);
	return (a);
}


int	main()
{
	Data	*a;

	a = new Data();
	a->name = "armaxima";
	a->numb = 20;

	std::cout << "adress Data = " << a << std::endl;
	std::cout << "name = " << a->name << ". numb = " << a->numb << std::endl << std::endl;

	uintptr_t	b = 0;
	b = serialize(a);
	std::cout << "adress Data = " << b << std::endl << std::endl;

	Data	*c;
	c = deserialize(b);
	std::cout << "adress Data = " << c << std::endl;
	std::cout << "name = " << c->name << ". numb = " << c->numb << std::endl << std::endl;

	delete c;

	std::cout << "adress Data = " << a << std::endl;
	std::cout << "name = " << a->name << ". numb = " << a->numb << std::endl << std::endl;

	std::cout << "adress Data = " << c << std::endl;
	std::cout << "name = " << c->name << ". numb = " << c->numb << std::endl << std::endl;

	return (0);
}
