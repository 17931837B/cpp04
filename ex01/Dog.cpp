/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:38:33 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:38:33 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(void)
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog class create.\n";
}

Dog::Dog(std::string name)
{
	this->type = name;
	std::cout << "Dog " << name << " create.\n";
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog " << "destroyed.\n";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
	this->type = copy.type;
}

Dog& Dog::operator=(const Dog& src) 
{
	if (this != &src)
	{
		delete this->brain;
		this->brain = new Brain(*(src.brain));
		// *this->brain = *src.brain;
		this->type = src.type;
	}
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": bowwow.\n";
}

Brain &Dog::getBrain(void) const
{
	return (*this->brain);
}

void	Dog::setBrain(Brain const &brain)
{
	*this->brain = brain;
}
