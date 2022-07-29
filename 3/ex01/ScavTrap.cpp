/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:53:54 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 16:38:43 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "noname";
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "Create " << this->name << " ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destrucor " << this->name << " ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
	*this = other;
	std::cout << "Create " << this->name << " ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	std::cout << "Create " << this->name << " ScavTrap" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " guard gate!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energy == 0)
		std::cout << "ScavTrap " << this->name << "don't have energy to attack!" << std::endl;
	else
	{
		this->energy--;
		std::cout << "ScavTrap " << this->name << " attacks " << target \
		<< ", causing " << this->damage << " points of damage!" << " left " << this->energy << " energy!" << std::endl;
	}
}
