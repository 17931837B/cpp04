#include "Brain.hpp"

Brain::Brain(void) 
{
	std::cout << "Brain class create.\n";
}

Brain::~Brain(void) 
{
	std::cout << "Brain " << "destroyed.\n";
}

Brain::Brain(const Brain& copy) 
{
	*this = copy;
}

Brain& Brain::operator=(const Brain& src) 
{
	if (this != &src)
		std::copy(src.ideas, src.ideas + 100, this->ideas);
	return (*this);
}

std::string const	&Brain::getIdea(int const index) const
{
	if (index >= 0 && index < 100)
		return (this->ideas[index]);
	return (this->ideas[0]);
}

void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->ideas[index] = idea;
}