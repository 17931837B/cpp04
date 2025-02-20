/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:38:47 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:38:47 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const int N = 42;
	Animal* animalList[N];
	Brain* firstAnimalBrain;
	Animal* copiedAnimal;
	size_t i;

	i = 0;
	while (i < N)
	{
		if (i % 2)
			animalList[i] = new Dog();
		else
			animalList[i] = new Cat();
		i++;
	}

	std::cout << "-------------------------------------\n";

	std::cout << "1st type: " << animalList[0]->getType() << std::endl;
	std::cout << "2nd type: " << animalList[1]->getType() << std::endl;
	firstAnimalBrain = &animalList[0]->getBrain();
	firstAnimalBrain->setIdea("nekoneoko", 0);
	firstAnimalBrain->setIdea("wanwan", 1);
	firstAnimalBrain->setIdea("nyannyan", 2);
	std::cout << "1st idea: " << animalList[0]->getBrain().getIdea(0) << std::endl;
	std::cout << "2nd idea: " << animalList[0]->getBrain().getIdea(1) << std::endl;
	std::cout << "3rd idea: " << animalList[0]->getBrain().getIdea(2) << std::endl;

	std::cout << "-------------------------------------\n";

	animalList[0]->getBrain().setIdea("Original Idea 1", 0);
	copiedAnimal = new Cat(*(Cat*)animalList[0]);
	copiedAnimal->getBrain().setIdea("Copied Idea 1", 0);
	std::cout << "Original Animal's Idea 1: " << animalList[0]->getBrain().getIdea(0) << std::endl;
	std::cout << "Copied Animal's Idea 1: " << copiedAnimal->getBrain().getIdea(0) << std::endl;

	std::cout << "-------------------------------------\n";

	i = 0;
	while (i < N)
	{
		delete animalList[i];
		i++;
	}
	delete copiedAnimal; 
	return (0);
}
