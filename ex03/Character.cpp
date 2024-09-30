/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:38:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/30 19:56:18 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name(""), _inventory()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
    this->_name = src.getName();
	for (int i = 0; i < MAX_MATERIA; i++)
	{
        if (src._inventory[i] != NULL)
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for(int i = 0; i < MAX_MATERIA; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i= 0; i < MAX_MATERIA; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
            	_inventory[i] = NULL;
			}
			_name = rhs._name;
			for(int i = 0; i < MAX_MATERIA; i++)
			{		
				if (rhs._inventory[i] != NULL)
					_inventory[i] = rhs._inventory[i]->clone();
				else
					_inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

// fonction pour equiper un objet 
void	Character::equip(AMateria *materia)
{
	if (materia != NULL)
	{
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_inventory[i] == NULL)
			{
				_inventory[i] = materia;
				break ;
			}
		}
	}
}
// fonction pour désequiper un objet
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= MAX_MATERIA - 1)
	{
		if (_inventory[idx] != NULL)
		{
			_inventory[idx] = NULL;
		}
	}
}
// La fonction permet d'utiliser un objet de l'inventaire
// sur une cible en activant l'effet de cet objet sur un autre personnage
void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= MAX_MATERIA - 1)
	{
		if (_inventory[idx] != NULL)
		{
			_inventory[idx]->use(target);
		}
	}	
}
