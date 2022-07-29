/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:04:33 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/31 14:24:15 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		check_argv_1(std::string arg)
{
	int	i;

	i = 0;
	if (arg.length() == 1 && isalpha(arg[i]))
		return (0);
	if (arg[i] == '-')
		i++;
	while (i < arg.length() && isdigit(arg[i]))
		i++;
	if (arg[i] == '.')
		i++;
	while (i < arg.length() && isdigit(arg[i]))
		i++;
	if (arg[i] == 'f' && i + 1 == arg.length())
		i++;
	if (i < arg.length())
		return (1);
	else
		return (0);
}

void	check_argv_0(int argc, char **argv)
{
	if (argc != 2)
		throw (std::exception());
	std::string arg = argv[1];
	if (check_argv_1(arg) && arg != "-inff" && arg != "inff" && arg != "nanf" && \
	arg != "-inf" && arg != "inf" && arg != "nan")
		throw (std::exception());
}
