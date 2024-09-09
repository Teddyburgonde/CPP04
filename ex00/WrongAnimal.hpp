/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:43:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 12:19:14 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &rhs);

    public:
        void makeSound() const;
        std::string getType() const;    
};

#endif