/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:54:09 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/25 20:58:35 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain;

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain &Brain);
	~Brain();
	Brain	&operator=(Brain &Brain);
};

#endif
