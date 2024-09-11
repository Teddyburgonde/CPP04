/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:53:06 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/11 13:36:05 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = "";
    }
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain assignation operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

std::string Brain::getIdea(size_t i) const
{
    if (i < 100) 
        return (this->_ideas[i]);
    else
        std::cout << "Index out of range" << std::endl;
    return (NULL);
}

void Brain::setIdea(std::string idea, size_t index)
{
    if (index < 100)
        this->_ideas[index] = idea;
    else
        std::cout << "Index out of range" << std::endl;
}