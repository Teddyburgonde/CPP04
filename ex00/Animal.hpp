/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:40 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 10:14:00 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal 
{
    public:    
    Animal();
    virtual ~Animal();
    Animal(const Animal& copy);
    Animal &operator=(const Animal& rhs);

    protected:
    std::string type;

};

#endif