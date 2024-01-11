/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmassy <anmassy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:46:31 by anmassy           #+#    #+#             */
/*   Updated: 2024/01/11 10:53:14 by anmassy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	delete  meta;
	delete  j;
	delete  i;
	
	std::cout << std::endl;
	std::cout << "////////////////////WrongAnimal test////////////////////" << std::endl;
	std::cout << std::endl;
	
	const WrongAnimal* Wrong = new WrongAnimal();
	const WrongAnimal* WCat = new WrongCat();
	
	std::cout << Wrong->getType() << " " << std::endl;
	std::cout << WCat->getType() << " " << std::endl;
	Wrong->makeSound();
	WCat->makeSound();

	delete Wrong;
	delete WCat;

	return 0;
}