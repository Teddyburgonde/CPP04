/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:24:06 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/10 14:38:56 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    //this->_brain = new Brain();
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
