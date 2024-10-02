/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:58:04 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/02 11:36:06 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
		Cure();
		Cure(const Cure &src);
		virtual ~Cure();
		Cure &operator=(const Cure &rhs);
    public:
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif