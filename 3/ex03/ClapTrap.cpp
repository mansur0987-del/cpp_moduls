/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:31:42 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 17:35:52 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("noname"), hp(10), energy(10), damage(0)
{
	std::cout << "Create " << this->name << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string const name) : name(name), hp(10), energy(10), damage(0)
{
	std::cout << "Create " << this->name << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : name(other.name), hp(other.hp), energy(other.energy), damage(other.damage)
{
	std::cout << "Copy " << this->name << " ClapTrap" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destrucor " << this->name << " ClapTrap" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->damage = other.damage;
	this->energy = other.energy;
	this->hp = other.hp;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy == 0)
		std::cout << "ClapTrap " << this->name << "don't have energy to attack!" << std::endl;
	else
	{
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target \
		<< ", causing " << this->damage << " points of damage!" << " left " << this->energy << " energy!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap " << this->name << " was killed!" << std::endl;
		return ;
	}
	if (amount > this->hp)
		this->hp = 0;
	else
		this->hp = this->hp - amount;

	if (this->hp == 0)
		std::cout << "ClapTrap " << this->name << " is killed!" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " take " << amount \
		<< " points of damage and " << this->hp << " life left!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy == 0)
		std::cout << "ClapTrap " << this->name << "don't have energy to repaire!" << std::endl;
	else
	{
		this->energy--;
		this->hp = this->hp + amount;
		std::cout << "ClapTrap " << this->name << " be repaired " << amount << " pointer and " << this->hp << " life left!" \
		<< " left " << this->energy << " energy!" << std::endl;
	}

}
