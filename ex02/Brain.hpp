/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobaba <tobaba@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-20 06:39:44 by tobaba            #+#    #+#             */
/*   Updated: 2025-02-20 06:39:44 by tobaba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain& copy);
		Brain& operator=(const Brain& src);
		std::string const	&getIdea(int const index) const;
		void				setIdea(std::string const &idea, int const &index);
};

#endif
