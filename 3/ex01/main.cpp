/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:56:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 16:57:43 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main( void )
{
	ScavTrap	c;
	ScavTrap	d("armaxima_1");

	c.attack("man");
	c.guardGate();

	int	i = 0;
	while (i++ < 10)
	{
		d.attack("human");
		d.guardGate();
	}
	return 0;
}
