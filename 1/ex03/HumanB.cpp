/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:36:59 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/17 15:57:21 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	this->name = name;
	this->WeaponB = NULL;
}

HumanB::~HumanB ()
{

}

void	HumanB::attack(void)
{
	if (this->WeaponB == NULL)
		std::cout << this->name << " not weapon " << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->WeaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &WeaponB)
{
	this->WeaponB = &WeaponB;
}

