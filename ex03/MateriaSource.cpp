/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:51:26 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/02 12:03:49 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < MAX_MATERIA; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (src._materia[i] != NULL)
			this->_materia[i] = src._materia[i]->clone(); 
		else
			this->_materia[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] != NULL)
			{
				delete _materia[i];
				_materia[i] = NULL;	
			}
			if (rhs._materia[i] != NULL)
				this->_materia[i] = rhs._materia[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for(int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m != NULL)
	{
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] != NULL && _materia[i]->getType() == m->getType())
			{
				std::cout << "This Materia is already learned." << std::endl;
				return ;
            }
        }
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] == NULL)
			{
				this->_materia[i] = m->clone();
				return ;
			}
		}
		std::cout << "MateriaSource is full" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		
		if (_materia[i] != NULL && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (NULL);
}

