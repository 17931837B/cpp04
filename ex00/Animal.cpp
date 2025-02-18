#include "Animal.hpp"

Animal::Animal(void) 
{
	this->type = "";
	std::cout << "Animal class create.\n";
}

Animal::Animal(std::string name) 
{
	this->type = name;
	std::cout << "Animal " << name << " create.\n";
}

Animal::~Animal(void) 
{
	std::cout << "Animal " << "destroyed.\n";
}

Animal::Animal(const Animal& copy) 
{
	this->type = copy.type;
}

Animal& Animal::operator=(const Animal& src) 
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal class called. Your code is wrong.\n";
}

std::string Animal::getType(void) const
{
	return (this->type);
}