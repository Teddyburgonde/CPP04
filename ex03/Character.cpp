/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:38:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/01 10:59:04 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name(""), _inventory()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string const &name) :_name(name)
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
		_name = rhs._name;
		for (int i= 0; i < MAX_MATERIA; i++)
		{
			if (_inventory[i])
			{
				delete _inventory[i];
            	_inventory[i] = NULL;
			}	
		}
		for(int i = 0; i < MAX_MATERIA; i++)
		{		
			if (rhs._inventory[i] != NULL)
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return this->_name;
}

// fonction pour equiper un objet
void	Character::equip(AMateria *materia)
{
	if (materia != NULL)
	{
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_inventory[i] == materia)
			{
				std::cout << "This Materia is already equipped." << std::endl;
				return ;
			}
		}
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_inventory[i] == NULL)
			{
				_inventory[i] = materia;
				return ;
			}
		}
		std::cout << "No empty slot to equip the Materia." << std::endl;
	}
}
// fonction pour désequiper un objet
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= MAX_MATERIA - 1)
	{
		if (_inventory[idx] != NULL)
			_inventory[idx] = NULL;
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
