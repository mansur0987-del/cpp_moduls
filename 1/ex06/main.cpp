/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:37:58 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/17 18:50:11 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	test;

	if (argc > 2)
	{
		std::cout << "Argument error" << std::endl;
		return (1);
	}
	if (argc == 1)
		test.complain("DEBUG");
	else
		test.complain(argv[1]);
	return (0);
}
