/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:36:59 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/16 23:43:51 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;
	int	i;

	N = 100;
	Zombie	*Zombie_b;
	Zombie_b = zombieHorde(N, "armaxima");

	i = 0;
	while (i < N)
	{
		Zombie_b[i].announce();
		i++;
	}

	delete[] Zombie_b;

	return (0);
}


