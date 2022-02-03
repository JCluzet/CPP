/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:17:40 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/03 01:26:16 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"


class Base { 
    public : 
        virtual ~Base(){}
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base *generate(void)
{
    Base *tmp;
    int rd;

    srand(time(NULL));
    rd = 1 + (rand() % 3);
    std::cout << YELLOW << "Generate ";
    if (rd == 1)
    {
        tmp = new A;
        std::cout << "A" << std::endl;
    }
    if (rd == 2)
    {
        tmp = new B;
        std::cout << "B" << std::endl;
    }
    if (rd == 3)
    {
        tmp = new C;
        std::cout << "C" << std::endl;
    }
    std::cout << RESET;
    return(tmp);
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << GREEN << "This Base is a A !" << RESET << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << GREEN << "This Base is a B !" << RESET << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << GREEN << "This Base is a C !" << RESET << std::endl;
}

void identify(Base &p)
{
    try{
        (void)dynamic_cast<A &>(p);
        std::cout << GREEN << "This Base is a A !" << RESET << std::endl;
        return ;
    }
    catch (std::bad_cast &bc) {}
    try{
        (void)dynamic_cast<B &>(p);
        std::cout << GREEN << "This Base is a B !" << RESET << std::endl;
        return ;
    }
    catch (std::bad_cast &bc) {}
    try{
        (void)dynamic_cast<C &>(p);
        std::cout << GREEN << "This Base is a C !" << RESET << std::endl;
        return ;
    }
    catch (std::bad_cast &bc) {}
}

int main(void)
{
    Base *temp;

    temp = generate();

    std::cout << std::endl;
    
    Base &tempref = *temp;

    std::cout << "Try to identify base with *" << std::endl;
    identify(temp);
    
    std::cout << std::endl;
    std::cout << "Try to identify base with &" << std::endl;
    identify(tempref);
    
    return(0);
}