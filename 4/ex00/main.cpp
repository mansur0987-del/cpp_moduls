/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armaxima <<armaxima@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:39:52 by armaxima          #+#    #+#             */
/*   Updated: 2022/05/25 20:46:07 by armaxima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main ()
{
	std::cout << "_____________________________" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "_____________________________" << std::endl;
	const Animal* j = new Dog();
	std::cout << "_____________________________" << std::endl;
	const Animal* i = new Cat();
	std::cout << "_____________________________" << std::endl;

	std::cout << "j->getType() = " << j->getType() << " " << std::endl;
	std::cout << "i->getType()" << i->getType() << " " << std::endl;
	std::cout << "_____________________________" << std::endl;
	std::cout << "cat say: " << std::endl;
	i->makeSound();
	std::cout << "_____________________________" << std::endl;
	std::cout << "dog say: " << std::endl;
	j->makeSound();
	std::cout << "_____________________________" << std::endl;
	std::cout << "Animal say: " << std::endl;
	meta->makeSound();

	std::cout << "_____________________________" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "_____________________________" << std::endl;
	std::cout << "_____________________________" << std::endl;
	std::cout << "_____________________________" << std::endl;

	std::cout << "_____________________________" << std::endl;
	const WrongAnimal* test_animal = new WrongAnimal();
	std::cout << "_____________________________" << std::endl;
	const WrongAnimal* test_cat = new WrongCat();
	std::cout << "_____________________________" << std::endl;

	std::cout << "WrongAnimal say: " << std::endl;
	test_animal->makeSound();
	std::cout << "WrongCat say: " << std::endl;
	test_cat->makeSound();

	std::cout << "_____________________________" << std::endl;
	delete test_animal;
	std::cout << "_____________________________" << std::endl;
	delete test_cat;


	return (0);
}
