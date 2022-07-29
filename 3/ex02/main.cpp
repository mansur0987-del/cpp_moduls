/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:56:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 17:06:00 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap	a;

	a.attack("man");
	a.highFivesGuys();

	FragTrap	b("armaxima_1");
	int	i = 0;
	while (i++ < 10)
	{
		b.attack("human");
		b.highFivesGuys();
	}
	return 0;
}
