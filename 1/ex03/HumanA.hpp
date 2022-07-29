/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 12:40:09 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/17 15:50:08 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&WeaponA;
	std::string	name;
public:
	HumanA(std::string name, Weapon &WeaponA);
	~HumanA(void);

	void	attack(void);
};

#endif
