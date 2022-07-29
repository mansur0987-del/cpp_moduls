/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:48:01 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/17 00:11:17 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	line;
	line = "HI THIS IS BRAIN";

	std::string	*stringPTR = &line;

	std::string	&stringREF = line;

	std::cout << "The memory address of the string variable.\t" << &line << std::endl;
	std::cout << "The memory address held by stringPTR.\t\t" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF.\t\t" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "The value of the string variable.\t\t" << line << std::endl;
	std::cout << "The value pointed to by stringPTR.\t\t" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF.\t\t" << stringREF << std::endl;

	return (0);
}
