/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:56:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 14:21:28 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void )
{
	ClapTrap	a;
	ClapTrap	b("armaxima");

	a.attack("man");
	a.takeDamage(20);
	a.beRepaired(10);

	int	i;
	while (i++ < 13)
	{
		b.attack("human");
		b.takeDamage(5);
		b.beRepaired(10);
	}
	return 0;
}
