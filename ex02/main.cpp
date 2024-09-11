/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:47:03 by tebandam          #+#    #+#             */
/*   Updated: 2024/09/11 13:43:45 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <ostream>

int main()
{
	std::cout << "\033[91mCreate Animal:\033[0m" << std::endl;

	std::cout << std::endl;

	const Animal *animal[10];
	for (int i = 0; i < 10; i++)
	{
        if (i % 2 == 0)
        {
            animal[i] = new Dog();
            if (animal[i] == NULL)
            {
                std::cerr << "Dog allocation failed" << std::endl;
                return (1);
            }
        }
        else
        {
            animal[i] = new Cat();
            if (animal[i] == NULL)
            {
                std::cerr << "Cat allocation failed" << std::endl;
                return (1);
            }
        }
    }
    std::cout << std::endl;

    std::cout << "\033[92mTesting:\033[0m" << std::endl;
    std::cout << std::endl;

    for(int i = 0; i < 10; i++)
    {
        std::cout << "It's a: " << animal[i]->getType();
        std::cout << " He makes the sound: "; 
        animal[i]->makeSound();
    }
	for(int i = 0; i < 10; i++)
	{
        delete animal[i];
    }
	std::cout << std::endl;
	std::cout << "\033[94mTesting Brain:\033[0m" << std::endl;
	std::cout << std::endl;

	Dog *a = new Dog();
    
    a->getBrain()->setIdea("Envie de manger", 0);
    a->getBrain()->setIdea("Envie de se balader", 1);
    a->getBrain()->setIdea("Envie de dormir", 2);
    for (int i = 0; i < 3; i++)
    {
        std::cout << a->getBrain()->getIdea(i) << std::endl;
    }
    delete a;
    return (0);
}
