/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/09 13:24:20 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* hachiro = new Dog();
    const Animal* garfield = new Cat();
    std::cout << hachiro->getType() << " " << std::endl;
    std::cout << garfield->getType() << " " << std::endl;
    hachiro->makeSound();
    garfield->makeSound();

    delete hachiro;
    delete garfield;

    return (0);
}
