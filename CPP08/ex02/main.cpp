/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 23:43:09 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/09 02:23:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"
#include <iostream>
#include <list>

// int main()
// {
//     MutantStack<int> stac;

//     stac.push(1);
//     stac.push(76);
//     stac.push(33);

//     std::cout << MAGENTA << "stac.top()  = " << RESET << stac.top() << std::endl;

//     stac.pop();

//     std::cout << MAGENTA << "stac.size() = " << RESET << stac.size() << std::endl;

//     stac.push(13);
//     stac.push(21);
//     stac.push(4);
//     stac.push(53);

//     MutantStack<int>::iterator it = stac.begin();
//     MutantStack<int>::iterator ite = stac.end();

//     std::cout << *it << std::endl;
//     it++;
//     std::cout << *it << std::endl;
//     --it;
//     std::cout << *it << std::endl;

//     std::cout << YELLOW << "stack       = " << RESET;
//     while (it != ite)
//     {
//         std::cout << *it;
//         ++it;
//         if (it != ite)
//             std::cout << " | ";
//     }
//     std::cout << std::endl;

//     MutantStack<int> temp;

//     for (int i = 0; i < 800; i++)
//         temp.push(i);

//     it = temp.begin();
//     ite = temp.end();

//     std::cout << YELLOW << "big stack   = " << RESET;
//     while (it != ite)
//     {
//         std::cout << *it;
//         ++it;
//         if (it != ite)
//             std::cout << " | ";
//     }
//     std::cout << std::endl;

//     for (int i = 0; i < 400; i++)
//     {
//         // std::cout << temp.top() << std::endl;
//         temp.pop();
//     }
//     it = temp.begin();
//     ite = temp.end();
//     std::cout << std::endl;
//     std::cout << YELLOW << "stack.pop() x400= " << RESET;
//     while (it != ite)
//     {
//         std::cout << *it;
//         ++it;
//         if (it != ite)
//             std::cout << " | ";
//     }
//     std::cout << std::endl;
//     return 0;
// }

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     //std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     //std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     // mstack.push(5);
//     // mstack.push(737);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
//     //std::stack<int> s(mstack);
//     return 0;
// }




int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
}

// int main()
// {
//     std::list<int> mstack1;
//     mstack1.push_back(5);
//     mstack1.push_back(17);
//     std::cout << mstack1.back() << std::endl;
//     mstack1.pop_back();
//     std::cout << mstack1.size() << std::endl;
//     mstack1.push_back(3);
//     mstack1.push_back(5);
//     mstack1.push_back(737);
//     std::list<int>::iterator it1 = mstack1.begin();
//     std::list<int>::iterator ite1 = mstack1.end();
//     ++it1;
//     --it1;
//     while (it1 != ite1)
//     {
//         std::cout << *it1 << std::endl;
//         ++it1;
//     }
//     std::list<int> s(mstack1);
// }