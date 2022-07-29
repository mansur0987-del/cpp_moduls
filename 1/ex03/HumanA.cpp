/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:36:59 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/17 15:49:48 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &WeaponA) : WeaponA(WeaponA)
{
	this->name = name;
}

HumanA::~HumanA ()
{

}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->WeaponA.getType() << std::endl;
}



