/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:36:59 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/16 23:16:15 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Zombie_a("1_armaxima");
	Zombie_a.announce();

	Zombie	*Zombie_b;
	Zombie_b = newZombie("2_armaxima");
	Zombie_b->announce();

	randomChump("3_armaxima");

	delete Zombie_b;

	return (0);
}


