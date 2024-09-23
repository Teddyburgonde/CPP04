/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:32:41 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/23 17:10:01 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AMateria
#define AMateria

#include <iostream>

class AMateria
{
    protected:
        // ...
    public:
        AMateria(std::string const & type);
        // ... 
        std::string const & getType() const; //Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif