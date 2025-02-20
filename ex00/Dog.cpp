/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:36:48 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:36:48 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

Dog::Dog(void)
{
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
	std::cout << "Dog " << "destroyed.\n";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	this->type = copy.type;
}

Dog& Dog::operator=(const Dog& src) 
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << this->type << ": bowwow.\n";
}
