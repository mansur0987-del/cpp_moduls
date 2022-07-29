/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phbook.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:10:35 by armaxima          #+#    #+#             */
/*   Updated: 2022/04/22 15:42:18 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phbook.class.hpp"

PhBook::PhBook(/* args */)
{
	this->index = -1;
}

PhBook::~PhBook()
{
}

void	PhBook::readinput(void)
{

	while (this->read_line.length() == 0 && (this->read_line != "ADD" || this->read_line != "SEARCH" || this->read_line != "EXIT"))
	{
		std::cout << "Put command: \"ADD\", \"SEARCH\", \"EXIT\"" << std::endl;
		std::cout << "Command : ";
		std::getline(std::cin, this->read_line);
	}
	std::cout << std::endl;
	if (this->read_line == "EXIT")
		exit(0);
	if (this->read_line == "SEARCH")
		this->Searching();
	if (this->read_line == "ADD")
	{
		if (this->index == 7)
			this->index = 0;
		else
			this->index++;
		this->contactes[this->index].Add(this->index);
		std::cout << "Contact added!" << std::endl;
	}
	this->read_line = "";

}

void	PhBook::Searching()
{
	int	i;

	std::cout << "_______________________________________________" << std::endl;
	std::cout << "|    index|  first name|  last name|  nickname|" << std::endl;
	i = 0;
	while (i < 8)
		this->contactes[i++].Show();
	this->read_line = "";
	std::cout << "Enter index (1 - 8): ";
	while (1)
	{
		std::getline(std::cin, this->read_line);
		if (this->read_line.length() == 1 && std::isdigit(this->read_line[0]))
			break;
		else
		{
			std::cout << std::endl;
			std::cout << "Error!" << std::endl;
			std::cout << "Enter index (1 - 8): ";
		}
	}
	i = std::stoi(this->read_line) - 1;
	std::cout << "_______________________________________________" << std::endl;
	if (i < 8 && i >= 0)
	{
		std::cout << "|    index|  first name|  last name|  nickname|" << std::endl << std::endl;
		this->contactes[i].Show();
	}
	else
		std::cout << "We have only 8 phone!" << std::endl << std::endl;
}
