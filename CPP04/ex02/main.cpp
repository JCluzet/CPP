/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:26:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 03:40:36 by jcluzet          ###   ########.fr       */
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
    std::cout << RED << "Can't construct because ABSTRACT class " << YELLOW << std::endl;
    // Animal* c = new Animal(); >> impossible because abstract class
    std::cout << std::endl;

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


    return 0;
}