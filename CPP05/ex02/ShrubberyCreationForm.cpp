/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:52:45 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 21:17:25 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src), _target(src._target) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
    std::cout << "ShrubberyCreationForm operator= called" << std::endl;
    this->_target = src._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget(void) const {
    return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &src) const {
    if (src.getGrade() > this->getExecGrade())
    {
        std::cout << src.getName() + " are not high enough to execute this form" << std::endl;
        throw Form::GradeTooLowException();
    }
    else if (!this->getSign()) {
        std::cout << this->getName() + " cannot be executed because it is not signed" << std::endl;
        throw Form::FormNotSignedException();
    }
    std::cout << src.getName() + " executes " + this->getName() + " and create " + this->getTarget() + "_shrubbery file" << std::endl;
    
    std::fstream file;
    file.open(this->_target + "_shrubbery", std::fstream::out);

    if (!file)
    {
        std::cout << "Error while creating " + this->_target + "_shrubbery file" << std::endl;
        throw ShrubberyCreationForm::ErrorFileException();
    }

    file << "    oxoxoo    ooxoo    " << std::endl;
    file << "  ooxoxo oo  oxoxooo   " << std::endl;
    file << " oooo xxoxoo ooo ooox  " << std::endl;
    file << " oxo o oxoxo  xoxxoxo  " << std::endl;
    file << "  oxo xooxoooo o ooo   " << std::endl;
    file << "    ooo\\oo\\  /o/o    " << std::endl;
    file << "        \\  \\/ /      " << std::endl;
    file << "         |   /         " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         | D|          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "  ______/____\\____    " << std::endl << std::endl;
    file << "    oxoxoo    ooxoo    " << std::endl;
    file << "  ooxoxo oo  oxoxooo   " << std::endl;
    file << " oooo xxoxoo ooo ooox  " << std::endl;
    file << " oxo o oxoxo  xoxxoxo  " << std::endl;
    file << "  oxo xooxoooo o ooo   " << std::endl;
    file << "    ooo\\oo\\  /o/o    " << std::endl;
    file << "        \\  \\/ /      " << std::endl;
    file << "         |   /         " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         | D|          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "  ______/____\\____    " << std::endl << std::endl;
    file << "    oxoxoo    ooxoo    " << std::endl;
    file << "  ooxoxo oo  oxoxooo   " << std::endl;
    file << " oooo xxoxoo ooo ooox  " << std::endl;
    file << " oxo o oxoxo  xoxxoxo  " << std::endl;
    file << "  oxo xooxoooo o ooo   " << std::endl;
    file << "    ooo\\oo\\  /o/o    " << std::endl;
    file << "        \\  \\/ /      " << std::endl;
    file << "         |   /         " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         | D|          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "         |  |          " << std::endl;
    file << "  ______/____\\____    " << std::endl;
    file.close();
}