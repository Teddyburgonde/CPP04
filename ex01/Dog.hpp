/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:59:50 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 21:01:33 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
    private :
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog& copy);
    
        ~Dog();
        Dog &operator=(const Dog& rhs);
    
    public:
    void makeSound() const;

    // ??????

    //void getIdeas(void)const;
	//void setIdea(size_t i, std::string idea);

};

#endif
