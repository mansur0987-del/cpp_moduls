/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:35:48 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 18:31:37 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->name = "noname";
	ClapTrap::name = this->name + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	std::cout << "Create " << this->name << " DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destrucor " << this->name << " DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	*this = other;
	std::cout << "Create " << this->name << " DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name)
{
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->damage = FragTrap::damage;
	std::cout << "Create " << this->name << " DiamondTrap" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	ClapTrap::name = this->name + "_clap_name";
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name = " << ClapTrap::name << ". DiamondTrap name = " << this->name << std::endl;
}
