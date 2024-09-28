/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:38:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/28 13:12:17 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

// definition forme canonique 

Character::Character() : _name(""), _inventory()
{
    
}



Character::Character(const Character &src)
{
    int i;

    i = 0;
    if (this != &src)
    {
        // copie du nom 
        this->_name = src.getName();
    }
    // Je dois copier les pointeurs vers les objets AMateria dnas _inventory.
    // if (src._inventory[i] == NULL)
        
    while (i < MAX_MATERIA)
    {
        if (src._inventory[i] != NULL)
        {
            this->_inventory[i] = src._inventory[i]->clone();
        }
        i++;
    }
}

