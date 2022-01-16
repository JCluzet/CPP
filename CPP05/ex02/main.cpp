/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 21:39:36 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
    Bureaucrat b("jcluzet", 26);
    
    ShrubberyCreationForm f("shrform");
    PresidentialPardonForm r("robform");
    try {
        b.incrementGrade();
        b.signForm(f);
        for (int i = 0; i < 22; i++) {
            b.incrementGrade();
        }
        std::cout << b << std::endl;
        b.executeForm(f);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}