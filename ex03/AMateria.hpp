/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:32:41 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/01 15:39:15 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter; 

class AMateria
{
    public:
        AMateria(std::string const & type);
        AMateria(const AMateria &src);
        AMateria &operator=(const AMateria &rhs);
        virtual ~AMateria();
    public:
        std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
    protected:
        std::string _type;
        AMateria();
};

#endif