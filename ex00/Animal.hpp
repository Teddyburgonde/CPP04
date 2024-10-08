/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:40 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 13:43:23 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>


class Animal 
{
    public:    
    Animal();
    Animal(const Animal& copy);
    
    virtual ~Animal();
    Animal &operator=(const Animal& rhs);

    public:
    virtual void makeSound()   const;
    std::string getType() const;
    
    protected:
    std::string _type;

};

#endif