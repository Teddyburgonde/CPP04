/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:23:08 by tebandam          #+#    #+#             */
/*   Updated: 2024/10/03 12:48:35 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Brain* _brain;
    public:
        Cat();
        Cat(const Cat& copy);
    
        ~Cat();
        Cat &operator=(const Cat& rhs);
    
    public:
        void makeSound() const;
};


#endif