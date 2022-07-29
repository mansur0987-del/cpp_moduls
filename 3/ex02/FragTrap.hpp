/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:53:56 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/23 17:02:48 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap;

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(FragTrap &other);
	FragTrap(std::string const name);

	FragTrap	&operator=(FragTrap &other);

	void		highFivesGuys(void);
	void		attack(const std::string& target);
};

#endif
