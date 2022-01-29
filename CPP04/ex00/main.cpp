/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:26:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/29 16:19:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    std::cout << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    delete i;
    delete j;
    delete meta;
    std::cout << std::endl;
    std::cout << std::endl;

    const WrongAnimal* metab = new WrongAnimal();
    const WrongAnimal* jb = new WrongCat();

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << metab->getType() << " " << std::endl;
    std::cout << jb->getType() << " " << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    jb->makeSound();
    metab->makeSound();

    std::cout << std::endl;
    delete jb;
    delete metab;
    
    return(0);
}