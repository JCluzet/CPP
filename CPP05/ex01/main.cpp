/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/01 03:22:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"

int main(void)
{
    std::cout << std::endl << GREEN << "Constructor : " << YELLOW << std::endl;
    Bureaucrat c("john", 149);

    std::cout << std::endl << MAGENTA << "Call of decrementGrade" << YELLOW << " using a try and catch"<< RESET << std::endl;
    
    try {
        c.decrementGrade();
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }

    std::cout << std::endl << MAGENTA << "Creation of 151-sign | 130-exec form" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    try {
        Form("johhny", 151, 130);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }
    std::cout << std::endl << MAGENTA << "Creation of 3-sign | 12-exec form" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    try {
        Form form1("johhny", 3, 12);
        std::cout << std::endl << MAGENTA << "Use of overloader : " << RESET;
        std::cout << form1 << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }
    std::cout << "-----------------------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation bureaucrat john lvl3" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    Bureaucrat john("john",3);
    std::cout << std::endl << MAGENTA << "Creation of 3-sign | 12-exec form" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    Form form1("form1", 3, 12);
    try {
        std::cout << std::endl << MAGENTA << "Use of beSigned with john : " << RESET;
        form1.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }
    std::cout << "-----------------------------"<< std::endl;


    std::cout << "-----------------------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation bureaucrat dann lvl2" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    Bureaucrat dann("dann",2);
    std::cout << std::endl << MAGENTA << "Creation of 3-sign | 12-exec form" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    Form form2("form2", 3, 12);
    try {
        std::cout << std::endl << MAGENTA << "Use of beSigned with dann " << RESET;
        form2.beSigned(dann);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl << "-----------------------------"<< std::endl;

    std::cout << "-----------------------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation bureaucrat dann lvl3" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    Bureaucrat dany("dany",2);
    std::cout << std::endl << MAGENTA << "Creation of 3-sign | 12-exec form" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    Form form3("form3", 3, 12);
    try {
        std::cout << std::endl << MAGENTA << "Use of signForm with dany : " << RESET;
        std::cout << std::endl;
        dany.signForm(form3);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl << "-----------------------------"<< std::endl;

    std::cout << "-----------------------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation bureaucrat dann lvl3" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    Bureaucrat daniel("dany",2);
    std::cout << std::endl << MAGENTA << "Creation of 1-sign | 12-exec form" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    Form form4("form4", 1, 12);
    try {
        std::cout << std::endl << MAGENTA << "Use of signForm with dany : " << RESET;
        std::cout << std::endl;
        daniel.signForm(form4);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl << "-----------------------------"<< std::endl;


    std::cout << std::endl;
    return(0);
}

