/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:15 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 16:34:13 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog;

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	~Dog();
	Dog(Dog &other);

	Dog		&operator=(Dog &other);
	void	makeSound() const;
};




#endif
