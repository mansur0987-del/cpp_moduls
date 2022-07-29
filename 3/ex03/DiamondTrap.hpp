/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:35:44 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 18:17:56 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap;

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	name;

public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(DiamondTrap &other);
	DiamondTrap(std::string const name);

	DiamondTrap	&operator=(DiamondTrap &other);

	void	attack(const std::string& target);
	void	whoAmI();
};

#endif
