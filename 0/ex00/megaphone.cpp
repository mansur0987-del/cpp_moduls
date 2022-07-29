/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:35:09 by armaxima          #+#    #+#             */
/*   Updated: 2022/04/11 18:34:52 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	g;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		g = 0;
		while (argv[i][g])
		{
			argv[i][g] = std::toupper(argv[i][g]);
			g++;
		}
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
