/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:58:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/25 11:52:03 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
		Cure(); // Constructor
		Cure(const Cure &src); // Constructor by copy
		virtual ~Cure(); // Destructor
		Cure &operator=(const Cure &rhs); // Overloading
    public:
		AMateria* clone() const; //!donné par le sujet 
		void use(ICharacter& target); //!donné par le sujet
};

#endif