/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:37:11 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:37:11 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
	this->type = "";
	std::cout << "WrongAnimal class create.\n";
}

WrongAnimal::WrongAnimal(std::string name) 
{
	this->type = name;
	std::cout << "WrongAnimal " << name << " create.\n";
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "WrongAnimal " << "destroyed.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) 
{
	this->type = copy.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) 
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "こんにちは。\n";
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
