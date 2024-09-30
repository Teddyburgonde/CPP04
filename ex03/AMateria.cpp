/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:57:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/30 14:13:21 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) :_type(type)
{
    std::cout << "AMateria constructor called with initialize" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
    std::cout << "AMateria constructor copy called" << std::endl;
    *this=src;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (_type); 
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}

