/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:52:02 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/30 15:02:07 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOUCE_HPP
# define MATERIASOUCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource 
{
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &src);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &rhs);

    public:
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
    private:
	    AMateria* _materia[4];
};

#endif