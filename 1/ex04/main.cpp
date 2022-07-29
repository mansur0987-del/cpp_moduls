/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:15:50 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/17 17:09:13 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	fread;
	std::ofstream	fwrite;
	std::string		line;

	if (argc != 4)
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	fread.open(filename);
	if (fread.is_open() == false)
	{
		std::cout << "Error!" << std::endl;
		return (1);
	}

	fwrite.open(filename + ".replace");
	if (fwrite.is_open() == false)
	{
		std::cout << "Error!" << std::endl;
		fread.close();
		return (1);
	}

	size_t	position;
	size_t	len_s1;
	len_s1 = s1.length();
	while(std::getline(fread, line))
	{
		while ((position = line.find(s1)) != std::string::npos)
		{
			line.erase(position, len_s1);
			line.insert(position, s2);
		}
		fwrite << line << std::endl;
	}
	fwrite.close();
	fread.close();
	return (0);
}
