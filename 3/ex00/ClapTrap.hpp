/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 10:31:45 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 14:15:52 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>

class ClapTrap;

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hp;
	unsigned int	energy;
	unsigned int	damage;
public:
	ClapTrap(void);
	~ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &other);

	ClapTrap &operator=(ClapTrap const &other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
