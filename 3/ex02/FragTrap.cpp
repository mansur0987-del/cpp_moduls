/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:53:54 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 17:11:18 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "noname";
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "Create " << this->name << " FragTrap" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destrucor " << this->name << " FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap &other)
{
	*this = other;
	std::cout << "Create " << this->name << " FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	this->name = name;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
	std::cout << "Create " << this->name << " FragTrap" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hp = other.hp;
	this->energy = other.energy;
	this->damage = other.damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " say: high Fives Guys!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->energy == 0)
		std::cout << "FragTrap " << this->name << "don't have energy to attack!" << std::endl;
	else
	{
		this->energy--;
		std::cout << "FragTrap " << this->name << " attacks " << target \
		<< ", causing " << this->damage << " points of damage!" << " left " << this->energy << " energy!" << std::endl;
	}
}
