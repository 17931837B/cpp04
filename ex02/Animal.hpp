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
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		virtual Brain &getBrain(void) const = 0;
};

#endif