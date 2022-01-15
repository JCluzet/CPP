/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/15 20:37:25 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
    try{
        Bureaucrat  john("john", 140);
        john.decrementGrade();
        std::cout << "Current Grade : " << john.getGrade() << std::endl;
        Form form1("form1", 138, 1);
        Form form2("form2", -12, 1);
        john.incrementGrade();
        john.incrementGrade();
        std::cout << "Current Grade : " << john.getGrade() << std::endl;
        std::cout << form2 << std::endl;
        john.signForm(form1);
        // john.signForm(form2);
    }
    catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

    try{
        Form form3("form3", 190, 1);
        std::cout << form3 << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    return 0;
}

// int main(void) {
//     try{
//         Bureaucrat josh("josh", 10);
//         Form document1("document1", 9, 50);
//         josh.signForm(document1);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     return 0;
// }

