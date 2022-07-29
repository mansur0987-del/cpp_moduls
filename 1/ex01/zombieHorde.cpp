/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 23:19:51 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/16 23:43:23 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie		*create_zombie;
	std::string	tmp;
	int			i;

	if (N < 0)
	{
		std::cout << "Error!" << std::endl;
		return (NULL);
	}
	create_zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		tmp = std::to_string(i + 1);
		create_zombie[i]._SetName(tmp + " " + name);
		i++;
	}
	return (create_zombie);
}
