/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:10:33 by armaxima          #+#    #+#             */
/*   Updated: 2022/04/21 16:37:32 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phbook.class.hpp"

int	main(void)
{
	PhBook	phonebook;

	std::cout << "Hello World!" << std::endl;
	std::cout << "______________________________________" << std::endl;
	while (1)
		phonebook.readinput();
	return (0);
}
