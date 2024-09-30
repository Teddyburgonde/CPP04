/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:51:26 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/30 14:33:05 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

MateriaSource::MateriaSource()
{
	
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	if (this != &src)
	{
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (src._materia[i] != NULL)
				this->_materia[i] = src._materia[i]->clone(); 
			else
				this->_materia[i] = NULL;
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] != NULL) // Supprime l'ancienne instance si elle existe
				delete _materia[i];
			// Copier l'objet depuis rhs, ou mettre NULL si rhs._materia[i] est NULL
			if (rhs._materia[i] != NULL)
				this->_materia[i] = rhs._materia[i]->clone(); // Cloner l'objet
			else
				_materia[i] = NULL;	// Assigner NULL si rhs.materia[i] est NULL
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
		{
			delete _materia[i];
		}
	}
}

// La fonction learnMateria doit réaliser deux tâches :
// - Apprendre une Nouvelle AMateria
// - Ajouter à l'inventaire 	
void MateriaSource::learnMateria(AMateria* m)
{
	if (m != NULL)
	{
		for(int i = 0; i < MAX_MATERIA; i++)
		{
			if (_materia[i] == NULL)
			{
				this->_materia[i] = m->clone(); // Apprends une nouvelle AMateria et l'ajoute a l'inventaire 
				return ;
			}
		}
	}
	std::cout << "MateriaSource is full" << std::endl;
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

