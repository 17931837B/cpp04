#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();

	meta->makeSound();
	std::cout << "[" << j->getType() << "]" << std::endl;
	j->makeSound();
	std::cout << "[" << i->getType() << "]" << std::endl;
	i->makeSound();
	std::cout << "[" << k->getType() << "]" << std::endl;
	k->makeSound();

	delete meta;
	delete j;
	delete i;
	delete k;
	return 0;
}