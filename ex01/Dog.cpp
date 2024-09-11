/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:19:53 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/11 13:13:47 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal()
{
	this->_type = src._type;
    this->_brain = new Brain(*src._brain);
	std::cout << "dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this != &rhs)
    {
        Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*rhs._brain);
    }
	std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
	delete 	_brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}

Brain* Dog::getBrain(void) const
{
    return (_brain);
}
