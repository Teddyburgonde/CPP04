/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:34:55 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/01 11:29:01 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << "Ice constructor copy called" << std::endl;
}

Ice &Ice::operator=(Ice &rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs)
    {
         AMateria::operator=(rhs);
    }
	return (*this);
    
}

Ice* Ice::clone() const
{
	Ice *ice;

	ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}