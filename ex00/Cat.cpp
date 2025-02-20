/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:36:25 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:36:25 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Cat class create.\n";
}

Cat::Cat(std::string name)
{
	this->type = name;
	std::cout << "Cat " << name << " create.\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat " << "destroyed.\n";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	this->type = copy.type;
}

Cat& Cat::operator=(const Cat& src) 
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << this->type << ": meow meow.\n";
}
