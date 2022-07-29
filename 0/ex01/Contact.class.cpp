/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:48:29 by armaxima          #+#    #+#             */
/*   Updated: 2022/04/22 15:41:20 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(/* args */)
{
	this->index = -1;
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::~Contact()
{
}

void	Contact::Show(void)
{
	if (this->index != -1)
	{
		std::cout << "|" << std::setw(10) << this->index << "|";
		if (this->first_name.length() > 10)
		{
			this->first_name.erase(9);
			this->first_name.append(".");
		}
		std::cout << std::setw(10) << this->first_name;
		std::cout << "|";
		if (this->last_name.length() > 10)
		{
			this->last_name.erase(9);
			this->last_name.append(".");
		}
		std::cout << std::setw(10) << this->last_name;
		std::cout << "|";
		if (this->nickname.length() > 10)
		{
			this->nickname.erase(9);
			this->nickname.append(".");
		}
		std::cout << std::setw(10) << this->nickname;
		std::cout << "|";
		std::cout << std::endl;
	}
}

void	Contact::Add(int index)
{
	std::string	tmp;

	std::cout << "_______________________________________________" << std::endl;
	std::cout << "New contact" << std::endl;
	this->index = index + 1;
	std::cout << "First name: " << std::endl;
	tmp = "";
	while (tmp.length() == 0)
		std::getline(std::cin, tmp);
	this->first_name = tmp;
	std::cout << "Last name: " << std::endl;
	tmp = "";
	while (tmp.length() == 0)
		std::getline(std::cin, tmp);
	this->last_name = tmp;
	std::cout << "Nickname: " << std::endl;
	tmp = "";
	while (tmp.length() == 0)
		std::getline(std::cin, tmp);
	this->nickname = tmp;
	std::cout << "Phone number: " << std::endl;
	tmp = "";
	while (tmp.length() == 0)
		std::getline(std::cin, tmp);
	this->phone_number = tmp;
	std::cout << "Darkest secret: " << std::endl;
	tmp = "";
	while (tmp.length() == 0)
		std::getline(std::cin, tmp);
	this->darkest_secret = tmp;
}
