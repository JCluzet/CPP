/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:26:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 03:32:54 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"

int main(void)
{
    std::cout << "----- ANIMAL -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
    Animal* c = new Animal();
    
    std::cout << std::endl << MAGENTA << "Call of getType   : " << RESET;
    std::cout << c->getType() << std::endl;
    
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    c->makeSound();
    
    std::cout << std::endl << RED << "Destructor : " << YELLOW << std::endl;
    delete c;
    std::cout << RESET << std::endl << "----- ANIMAL -----" << std::endl << std::endl;

    std::cout << "----- CAT -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
    Animal* b = new Cat();
    
    std::cout << std::endl << MAGENTA << "Call of getType   : " << RESET;
    std::cout << b->getType() << std::endl;
    
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    b->makeSound();
    
    std::cout << std::endl << RED << "Destructor : " << YELLOW << std::endl;
    delete b;
    std::cout << RESET << std::endl << "----- CAT -----" << std::endl << std::endl;
    

    std::cout << "----- DOG -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
    Animal* a = new Dog();
    
    std::cout << std::endl << MAGENTA << "Call of getType   : " << RESET;
    std::cout << a->getType() << std::endl;
    
    std::cout << MAGENTA << "Call of makeSound : " << RESET;
    a->makeSound();
    
    std::cout << std::endl << RED << "Destructor : " << YELLOW << std::endl;
    delete a;
    std::cout << RESET << std::endl << "----- DOG -----" << std::endl << std::endl << std::endl;





    std::cout << std::endl << GREEN << "Construction of 5 dogs :" << std::endl;
    
    Animal *(j[10]);
    for (int i = 0; i < 5; i++)
    {
        std::cout << YELLOW << std::endl;
        j[i] = new Dog();
    }
    std::cout << RESET;
    std::cout << std::endl << GREEN << "Construction of 5 cats :" << std::endl;
    for (int i = 5; i < 10; i++)
    {
        std::cout << YELLOW << std::endl;
        j[i] = new Cat();
    }
    std::cout << std::endl << GREEN << "Call of getType :" << RESET << std::endl << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << RESET << "Array[" << i << "] : " << YELLOW;
        std::cout << j[i]->getType() << std::endl;
    }
    std::cout << std::endl << GREEN << "Call of makeSound :" << RESET << std::endl << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << RESET << "Array[" << i << "] : " << YELLOW;
        j[i]->makeSound();
    }
    std::cout << std::endl << RED << "Destruction of Array :" << RESET << std::endl << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << RESET << "Array[" << i << "] : " << YELLOW << std::endl;
        delete j[i];
        std::cout << RESET << std::endl;
    }

    std::cout << std::endl << GREEN << "Subject test :" << std::endl << std::endl << RESET;

    const Animal* l = new Dog();
    std::cout << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;

    delete l;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    //system("leaks animal");
    return 0;
}