/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:23:08 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 20:58:36 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
    private:
        Brain *_brain;
    
    public:
        Cat();
        Cat(const Cat& copy);
    
        ~Cat();
        Cat &operator=(const Cat& rhs);
    
    public:
        void makeSound() const;
    public:

        // ????????
        // void getIdeas(void)const;
		// void setIdea(size_t i, std::string idea);
};


#endif