/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:29:51 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/27 14:25:03 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src)
{
    std::cout << "Cure constructor copy called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor copy called" << std::endl;
}

Cure &Cure::operator=(const Cure &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

Cure* Cure::clone() const
{
    Cure *cure;

    cure = new Cure();
    return (cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "s wounds *" << std::endl;
}