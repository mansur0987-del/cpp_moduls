/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:23:07 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 16:59:53 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal;

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	virtual ~Animal() = 0;
	Animal(Animal &other);

	Animal				&operator=(Animal &other);
	std::string const	&getType() const;
	virtual void		makeSound() const = 0;
};




#endif
