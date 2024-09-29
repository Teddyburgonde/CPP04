/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:51:26 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/29 02:55:18 by tebandam         ###   ########.fr       */
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

Character& Character::operator=(const Character& rhs)
{
	
}

MateriaSource::~MateriaSource()
{
    //for
	//delete
}

void MateriaSource::learnMateria(AMateria*)
{
	//for 

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	//for
	// return clone()
	
	//return (NULL)	
}

