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