/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:29:51 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/03 12:41:04 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &src) : AMateria(src)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &rhs)
{
    if (this != &rhs)
        this->AMateria::operator=(rhs);
    return (*this);
}

AMateria* Cure::clone() const
{
    Cure *newCure = new Cure(*this);
    return (newCure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}