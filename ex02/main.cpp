/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teddybandama <teddybandama@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 20:09:44 by teddybandam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    //const Animal* animal = new Animal();
    const Animal* hachiro = new Dog();
    const Animal* garfield = new Cat();
    std::cout << hachiro->getType() << " " << std::endl;
    std::cout << garfield->getType() << " " << std::endl;
    std::cout << animal->getType() << " " << std::endl;
    hachiro->makeSound();
    garfield->makeSound();
    animal->makeSound();
    
    // idea
    //Brain *
    
    //delete hachiro;
    delete garfield;
    delete animal;

    return (0);
}
