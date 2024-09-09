/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 13:45:51 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* animal = new Animal();
    const Animal* hachiro = new Dog();
    const Animal* garfield = new Cat();
    std::cout << hachiro->getType() << " " << std::endl;
    std::cout << garfield->getType() << " " << std::endl;
    std::cout << animal->getType() << " " << std::endl;
    hachiro->makeSound();
    garfield->makeSound();
    
    delete hachiro;
    delete garfield;
    delete animal;

    return (0);
}
