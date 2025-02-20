/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:40:55 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:40:55 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "WrongCat class create.\n";
}

WrongCat::WrongCat(std::string name)
{
	this->type = name;
	std::cout << "WrongCat " << name << " create.\n";
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat " << "destroyed.\n";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	this->type = copy.type;
}

WrongCat& WrongCat::operator=(const WrongCat& src) 
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << this->type << ": meow meow.\n";
}
