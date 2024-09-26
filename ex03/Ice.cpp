/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:34:55 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/26 20:37:25 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Ice constructor called" << std::endl;
}
Ice::~Ice()
{
    std::cout << "Ice destructor copy called" << std::endl;
}

Ice::Ice(const Ice &src)
{
	std::cout << "Ice constructor copy called" << std::endl;
}

Ice &Ice::operator=(Ice &rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	if (this != &rhs)
    {
        this->_type = rhs._type;
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