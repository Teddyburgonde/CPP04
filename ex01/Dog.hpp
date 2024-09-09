/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:59:50 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 13:54:47 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    public:
    Dog();
    Dog(const Dog& copy);
    
    ~Dog();
    Dog &operator=(const Dog& rhs);
    
    public:
    void makeSound() const;

    // a verif ??????
    // Brain    *_brain; 

};

#endif
