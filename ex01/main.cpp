#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Animal* animalList[42];
	Brain* firstAnimalBrain;
	size_t i;

	i = 0;
	while (i < 42)
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
	Animal* copiedAnimal = new Dog(*(Dog*)animalList[0]);
	copiedAnimal->getBrain().setIdea("Copied Idea 1", 0);
	std::cout << "Original Animal's Idea 1: " << animalList[0]->getBrain().getIdea(0) << std::endl;
	std::cout << "Copied Animal's Idea 1: " << copiedAnimal->getBrain().getIdea(0) << std::endl;

	std::cout << "-------------------------------------\n";

	i = 0;
	while (i < 42)
	{
		delete animalList[i];
		i++;
	}
	delete copiedAnimal; 
	return (0);
}