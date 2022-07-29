/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 13:56:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 18:37:35 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap	a;

	a.attack("man");
	a.whoAmI();

	DiamondTrap	b("armaxima_1");
	int	i = 0;
	while (i++ < 10)
	{
		b.attack("human");
		b.attack("1111");
		b.attack("2222");
		b.whoAmI();
	}

	return 0;
}
