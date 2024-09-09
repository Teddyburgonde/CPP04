/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:24:06 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 21:44:00 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
    if (this->_brain == NULL)
    {
        std::cerr << "Error: Brain is NULL" << std::endl;
        exit(1);
    }
}

Cat::~Cat()
{
    // delete this->_brain; ??????
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &rhs)
{
    // ???????????????????????
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}
