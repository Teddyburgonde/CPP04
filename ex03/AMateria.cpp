/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:57:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/04 17:06:17 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("")
{

}

AMateria::AMateria(std::string const &type) :_type(type)
{

}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &src)
{
    *this=src;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
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

