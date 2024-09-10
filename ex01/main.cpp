/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/10 14:33:15 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const int   size = 6;
    Animal *animals[size];

    for(int i = 0; i < size / 2; i++)
    {
        animals[i] = new Dog();
    }
    for(int i = 0; i < size / 2; i++)
    {
        animals[i] = new Cat();
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << animals[i]->getType() << " fait un son : ";
        animals[i]->makeSound();
    }

    for(int i = 0; i < size; i++)
    {
        delete animals[i];
    }
    
    









    
    // const Animal* animal = new Animal();
    // const Animal* hachiro = new Dog();
    // const Animal* garfield = new Cat();
    // std::cout << hachiro->getType() << " " << std::endl;
    // std::cout << garfield->getType() << " " << std::endl;
    // std::cout << animal->getType() << " " << std::endl;
    // hachiro->makeSound();
    // garfield->makeSound();
    // animal->makeSound();
    
    // // idea
    // Brain *b;
    // for(int i = 0; i < 100; i++)
    // {
        
    // }
    
    
    
    // delete hachiro;
    // delete garfield;
    // delete animal;

    return (0);
}
