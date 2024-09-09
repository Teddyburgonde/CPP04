/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:43:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 21:02:54 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
		std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &rhs);

    public:
        void makeSound() const;

    public:    
        std::string getType() const;    
};

#endif