/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:37:51 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:37:51 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(std::string name);
		virtual ~Animal(void);
		Animal(const Animal& copy);
		Animal& operator=(const Animal& src);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual Brain &getBrain(void) const = 0;
};

#endif
