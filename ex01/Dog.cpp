/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:19:53 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 21:45:12 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
    if (this->_brain == NULL)
    {
        std::cerr << "Error: Brain is NULL" << std::endl;
        exit(1);
    }
}

Dog::Dog(const Dog &src) : Animal()
{
    *this = src;
}

Dog &Dog::operator=(const Dog &src)
{
    // ???????????????????????
    if (this != &src)
    {
        this->_type = src._type;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}


// ???? void Dog::getIdeas(void) const ?????