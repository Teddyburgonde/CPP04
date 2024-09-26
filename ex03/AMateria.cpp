/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:57:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/25 16:57:44 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &src)
{
    *this=src;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
     std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

AMateria::AMateria(std::string const &type)
{
   _type = type;
}

