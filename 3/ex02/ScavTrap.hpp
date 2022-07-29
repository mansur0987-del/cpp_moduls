/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:53:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 16:38:50 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap;

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(ScavTrap &other);
	ScavTrap(std::string const name);

	ScavTrap	&operator=(ScavTrap &other);

	void		guardGate();
	void		attack(const std::string& target);
};

#endif
