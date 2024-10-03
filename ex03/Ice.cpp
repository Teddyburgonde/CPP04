/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:34:55 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/03 12:37:26 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
}
Ice::~Ice()
{
}

Ice::Ice(const Ice &src) : AMateria(src)
{
}

Ice &Ice::operator=(Ice &rhs)
{
	if (this != &rhs)
    {
         AMateria::operator=(rhs);
    }
	return (*this);
    
}

AMateria* Ice::clone() const
{
	Ice *newIce = new Ice(*this);
	return (newIce);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}