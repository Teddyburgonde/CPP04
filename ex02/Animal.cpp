/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:53:15 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/11 10:38:43 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :_type("Default")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal& copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}


Animal &Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}