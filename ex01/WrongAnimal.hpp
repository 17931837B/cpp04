#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		virtual ~WrongAnimal(void);
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator=(const WrongAnimal& src);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif