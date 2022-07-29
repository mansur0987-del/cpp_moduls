/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:30:10 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/31 17:25:39 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	try
	{
		check_argv_0(argc, argv);

		std::string	arg = argv[1];
		double		num;

		if (arg.length() == 1 && isalpha(arg[0]))
			num = static_cast <double> (arg[0]);
		else
			num = std::stod(arg);

		Convert a(num);

		a.ConvertChar();
		a.ConvertInt();
		a.ConvertFloat();
		a.ConvertDouble();
	}
	catch(const std::exception& e)
	{
		std::cout << "char: Error" << std::endl;
		std::cout << "int: Error" << std::endl;
		std::cout << "float: Error" << std::endl;
		std::cout << "double: Error" << std::endl;
	}
	return (0);
}
