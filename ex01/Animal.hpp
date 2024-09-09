/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:40 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 20:43:49 by teddybandam      ###   ########.fr       */
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
    virtual void makeSound() const;
    
    public:
    std::string getType() const;
    
    protected:
    std::string _type;

};

#endif