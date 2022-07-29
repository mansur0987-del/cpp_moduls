/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:32:18 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 16:33:58 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat;

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	~Cat();
	Cat(Cat &other);

	Cat		&operator=(Cat &other);
	void	makeSound() const;
};




#endif
