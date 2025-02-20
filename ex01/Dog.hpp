/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:38:40 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:38:40 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog(void);
		Dog(std::string name);
		virtual ~Dog(void);
		Dog(const Dog& copy);
		Dog& operator=(const Dog& src);
		virtual void 	makeSound(void) const;
		Brain 			&getBrain(void) const;
		void			setBrain(Brain const &brain);
};

#endif
