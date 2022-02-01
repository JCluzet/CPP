/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/01 15:52:39 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define RESET "\033[0m"

int main(void) {
    std::cout << "--------------ShrubberyCreationForm---------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation bureaucrat john lvl3" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    Bureaucrat john("john",3);
    std::cout << std::endl << MAGENTA << "Creation of ShrubberyCreationForm" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    ShrubberyCreationForm form1("form1");

    std::cout << std::endl << MAGENTA << "getSignGrade : " << RESET;
    std::cout << form1.getSignGrade();
    std::cout << std::endl << MAGENTA << "getExecGrade : " << RESET;
    std::cout << form1.getExecGrade() << std::endl;
    try {
        std::cout << std::endl << MAGENTA << "Use of beSigned with john." << RESET;
        form1.beSigned(john);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form1;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form1.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl << std::endl;
    }
    try {
        std::cout << std::endl << MAGENTA << "Use of execute with john." << std::endl << RESET;
        john.executeForm(form1);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form1;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form1.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl << std::endl;
    }
    std::cout << "--------------ShrubberyCreationForm---------------"<< std::endl << std::endl;

    std::cout << std::endl << "--------------RobotomyRequestForm---------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation of RobotomyRequestForm" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    RobotomyRequestForm form2("form2");

    std::cout << std::endl << MAGENTA << "getSignGrade : " << RESET;
    std::cout << form2.getSignGrade();
    std::cout << std::endl << MAGENTA << "getExecGrade : " << RESET;
    std::cout << form2.getExecGrade() << std::endl;
    try {
        std::cout << std::endl << MAGENTA << "Use of beSigned with john." << RESET;
        form2.beSigned(john);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form2;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form2.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl << std::endl;
    }
    try {
        std::cout << std::endl << MAGENTA << "Use of execute with john." << std::endl << RESET;
        john.executeForm(form2);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form2;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form2.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl << std::endl;
    }
    std::cout << "--------------RobotomyRequestForm---------------"<< std::endl << std::endl;

    std::cout << std::endl << "--------------PresidentialPardonForm---------------"<< std::endl;
    std::cout << std::endl << MAGENTA << "Creation of PresidentialPardonForm" << YELLOW << " using a try and catch : "<< RESET << std::endl;
    
    PresidentialPardonForm form3("form3");

    std::cout << std::endl << MAGENTA << "getSignGrade : " << RESET;
    std::cout << form3.getSignGrade();
    std::cout << std::endl << MAGENTA << "getExecGrade : " << RESET;
    std::cout << form3.getExecGrade() << std::endl;
    try {
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form3;
        std::cout << std::endl << MAGENTA << "Use of beSigned with john." << std::endl << RESET;
        form3.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl << std::endl;
    }
    try {
        std::cout << std::endl << MAGENTA << "Use of execute with john." << std::endl << RESET;
        john.executeForm(form3);
        std::cout << std::endl << std::endl << MAGENTA << "Use of overloader : " << std::endl << RESET;
        std::cout << form3;
        std::cout << std::endl << MAGENTA << "Use again of beSigned with john." << std::endl << RESET;
        form3.beSigned(john);
    }
    catch (std::exception &e) {
        std::cerr << RED << "Output of Exception:  " << RESET << e.what() << std::endl << std::endl;
    }
    std::cout << "--------------PresidentialPardonForm---------------"<< std::endl << std::endl;
    return(0);
}