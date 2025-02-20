/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:36:18 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:36:18 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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
};

#endif
