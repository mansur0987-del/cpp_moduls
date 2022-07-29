/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:39:52 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/26 17:14:14 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main ()
{
	{
		int	len = 7;
		std::cout << "_____________________________" << std::endl;
		std::cout << "check_1" << std::endl;
		Animal **meta;
		std::cout << "_____________________________" << std::endl;
		meta = new Animal*[len];
		std::cout << "_____________________________" << std::endl;
		int	i;
		while (i < len)
		{
			if (i % 2)
				meta[i] = new Cat();
			else
				meta[i] = new Dog();
			std::cout <<"______________" << i << "_______________" << std::endl;
			i++;
		}
		while (i-- > 0)
		{
			meta[i]->makeSound();
			delete meta[i];
			std::cout <<"______________" << i << "_______________" << std::endl;
		}
		delete[] meta;

		std::cout << "_____________________________" << std::endl;
		Animal *a;
		a = new Dog();
		a->makeSound();
		delete a;
		std::cout << "_____________________________" << std::endl;
	}
	{
		std::cout << "_____________________________" << std::endl;
		std::cout << "check_2" << std::endl;
		Dog *dog_1 = new Dog();
		Cat *cat_1 = new Cat();
		std::cout << "_____________________________" << std::endl;
		Dog *dog_2 = new Dog();
		Cat *cat_2 = new Cat();
		std::cout << "_____________________________" << std::endl;

		*dog_2 = *dog_1;
		*cat_2 = *cat_1;
		std::cout << "_____________________________" << std::endl;
		delete dog_1;
		delete dog_2;
		std::cout << "_____________________________" << std::endl;
		delete cat_1;
		delete cat_2;
		std::cout << "_____________________________" << std::endl;
	}
	{
		std::cout << "_____________________________" << std::endl;
		std::cout << "check_3" << std::endl;
		Dog *dog_1 = new Dog();
		Cat *cat_1 = new Cat();
		std::cout << "_____________________________" << std::endl;
		Dog *dog_2 = new Dog(*dog_1);
		Cat *cat_2 = new Cat(*cat_1);
		std::cout << "_____________________________" << std::endl;

		delete dog_1;
		delete dog_2;
		std::cout << "_____________________________" << std::endl;
		delete cat_1;
		delete cat_2;
		std::cout << "_____________________________" << std::endl;
	}
	return (0);
}
