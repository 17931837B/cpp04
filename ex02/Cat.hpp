/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:40:01 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:40:01 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat(void);
		Cat(std::string name);
		virtual ~Cat(void);
		Cat(const Cat& copy);
		Cat& operator=(const Cat& src);
		virtual void 	makeSound(void) const;
		Brain 			&getBrain(void) const;
		void			setBrain(Brain const &brain);
};

#endif
