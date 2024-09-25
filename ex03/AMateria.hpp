/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:32:41 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/25 10:49:14 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMATERIA_HPP
#define AMaTERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter; // permet de dire que la classe ICharacter existe
// La precision permet d'eviter les dependances cycliques

class AMateria
{
    public:
        AMateria(std::string const & type); //! donné par le sujet
        AMateria(const AMateria &src); // constructeur par copie
        AMateria &operator=(const AMateria &rhs); // operateur d'affectation
        virtual ~AMateria(); // destructeur
    public:
        std::string const & getType() const; //!donné par le sujet //Returns the materia type 
        // quand un objet qui herite de cette classe est détruit,
        // le destructeur est appelé
		virtual AMateria* clone() const = 0; //!donné par le sujet 
		virtual void use(ICharacter& target); //!donné par le sujet
    protected:
        std::string _type; //!donné par le sujet
        AMateria(); // constructeur par defaut
};

#endif