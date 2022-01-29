/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:26:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/29 18:39:58 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

// int main(void) {
//     std::cout << std::endl;
//     Animal *bernard = new Animal[100];
//     std::cout << std::endl;
// 	for(int i = 0; i < 50; i++)
//     {
//         std::cout << "Dog : " << std::endl << std::endl;
// 		bernard[i] = Dog();
//         std::cout << std::endl;
//     }
//     for(int i = 50; i < 100; i++)
//     {
// 	    bernard[i] = Cat();
//     }
//     std::cout << std::endl << std::endl;
//     Animal *woof = new Animal[1];

//     std::cout << std::endl << std::endl;
//     woof[0] = Dog();

//     std::cout << std::endl << std::endl;
//     delete [] woof;
//     std::cout << std::endl << std::endl;
// 	delete [] bernard;
// 	return 0;
// }

int main(void)
{
    Animal *(j[100]);
    for (int i = 0; i < 50; i++)
    {
        j[i] = new Dog();
    }
    for (int i = 50; i < 100; i++)
    {
        j[i] = new Cat();
    }
    for (int i = 0; i < 100; i++)
    {
        j[i]->makeSound();
    }
    for (int i = 0; i < 100; i++)
    {
        delete j[i];
    }
}