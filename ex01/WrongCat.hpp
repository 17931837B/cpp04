#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string name);
		virtual ~WrongCat(void);
		WrongCat(const WrongCat& copy);
		WrongCat& operator=(const WrongCat& src);
		void makeSound(void) const;
};

#endif