/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:38:44 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/04 17:09:14 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name(""), _inventory(), _save()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 150; i++)
		_save[i] = NULL;
}


Character::Character(std::string const &name) :_name(name)
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 150; i++)
		_save[i] = NULL;
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
	for(int i = 0; i < MAX_MATERIA; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	for (int i = 0; i < 150; i++) 
	{
		if (_save[i])
			delete _save[i];
	}
}

Character &Character::operator=(const Character &rhs)
{
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
	return (this->_name);
}

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

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= MAX_MATERIA - 1)
	{
		if (_inventory[idx] != NULL)
		{
			for (int i = 0; i < 150; i++) 
			{
				if (!_save[i]) 
				{
					_save[i] = _inventory[idx];
					break;
				}
			}
			_inventory[idx] = NULL;
		}
	}
}

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
