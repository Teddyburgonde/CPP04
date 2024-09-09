/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:53:06 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 20:03:15 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
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
        // verif ????????????
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

// Brain::Brain(const std::string ideas[100])
// {
//     for (int i = 0; i < 100; i++)
//         this->_ideas[i] = ideas[i];
// }

// std::string Brain::getIdea(int i)
// {
//     return (this->_ideas[i]);
// }

// void Brain::setIdea(int i, std::string idea)
// {
//     this->_ideas[i] = idea;
// }

