/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:01 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/15 02:48:10 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void) {
    try{
        Bureaucrat  john("john", 149);
        john.decrementGrade();
        std::cout << "Current Grade : " << john.getGrade() << std::endl;
        john.decrementGrade();
        std::cout << "Current Grade : " << john.getGrade() << std::endl;
        john.decrementGrade();
    }
    catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
    return 0;
}


