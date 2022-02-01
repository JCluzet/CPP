/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/01 03:05:55 by jcluzet          ###   ########.fr       */
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
    std::cout << "----- Bureaucrat -----" << std::endl << std::endl;
    std::cout << GREEN << "Constructor : " << YELLOW << std::endl;
    Bureaucrat c("john", 149);
    
    std::cout << std::endl << MAGENTA << "Call of getGrade   : " << RESET;
    std::cout << c.getGrade() << std::endl;
    
    std::cout << MAGENTA << "Call of incrementGrade." << RESET << std::endl;
    c.incrementGrade();
    std::cout << std::endl << MAGENTA << "Call of getGrade   : " << RESET;
    std::cout << c.getGrade() << std::endl;
    
    std::cout << MAGENTA << "Call of incrementGrade." << RESET << std::endl;
    c.incrementGrade();


    std::cout << std::endl << MAGENTA << "Call of getGrade   : " << RESET;
    std::cout << c.getGrade() << std::endl;
    
    std::cout << MAGENTA << "Call of decrementGrade." << RESET << std::endl;
    c.decrementGrade();
    std::cout << std::endl << MAGENTA << "Call of getGrade   : " << RESET;
    std::cout << c.getGrade() << std::endl;
    
    std::cout << MAGENTA << "Call of decrementGrade." << RESET << std::endl;
    c.decrementGrade();
    
    std::cout << std::endl << MAGENTA << "Call of getGrade   : " << RESET;
    std::cout << c.getGrade() << std::endl;
    std::cout << MAGENTA << "Call of decrementGrade." << RESET << std::endl;
    c.decrementGrade();


    std::cout << std::endl << MAGENTA << "Use of overloader : " << RESET;
    std::cout << c << std::endl;

    std::cout << std::endl << MAGENTA << "Call of decrementGrade" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    try {
        c.decrementGrade();
    }
    catch (std::exception &e) {
        std::cerr << "Output of Exception:  " << e.what() << std::endl;
    }

    std::cout << std::endl << MAGENTA << "Creation of 151-lvl bureaucrat" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    try {
        Bureaucrat("johhny", 151);
    }
    catch (std::exception &e) {
        std::cerr << "Output of Exception:  " << e.what() << std::endl;
    }
    std::cout << std::endl << MAGENTA << "Creation of 0-lvl bureaucrat" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    try {
        Bureaucrat("johhny", 0);
    }
    catch (std::exception &e) {
        std::cerr << "Output of Exception:  " << e.what() << std::endl;
    }
    std::cout << RESET << std::endl << "----- Bureaucrat -----" << std::endl << std::endl;
    return(0);
}

