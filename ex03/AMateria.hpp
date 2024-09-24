/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:32:41 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/24 18:54:21 by teddybandam      ###   ########.fr       */
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
        AMateria(std::string const & type);
        AMateria(const AMateria &src); // constructeur par copie
        AMateria &operator=(const AMateria &src); // operateur d'affectation
        virtual ~AMateria(); // destructeur
    public:
        std::string const & getType() const; //Returns the materia type
        // quand un objet qui herite de cette classe est détruit,
        // le destructeur est appelé
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
    protected:
        std::string _type;
        AMateria(); // constructeur par defaut
};

#endif