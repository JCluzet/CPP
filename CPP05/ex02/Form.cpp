/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:04:37 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/15 20:02:50 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form(std::string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form " << this->_name << " created with grade " << this->_signGrade << " and " << this->_execGrade << std::endl;
}

Form::~Form() {
    std::cout << "Form " << this->_name << " has been destroyed" << std::endl;
}

Form::Form(const Form &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade), _signed(src._signed) {
    std::cout << "Form copy" << this->_name << " created with grade " << this->_signGrade << " and " << this->_execGrade << std::endl;
}

Form& Form::operator=(const Form &src) {
    std::cout << *this << " has been assigned" << std::endl; 
    this->_signed = src._signed;
    return *this;
}

std::ostream& operator<<(std::ostream &o, const Form &src) {
    o << "Form " << src.getName() << " with grade " << src.getSignGrade() << " and " << src.getExecGrade() << std::endl;
    return o;
}

Form& Form::beSigned(Bureaucrat &src) {
    if (src.getGrade() >= this->_signGrade)
    {
        std::cout << src.getName() << " cannot sign" << std::endl;
        throw Form::GradeTooLowException();
    }
    if (this->_signed)
    {
        std::cout << src.getName() << " cannot sign " << std::endl;
        throw Form::FormAlreadySignedException();
    }
    this->_signed = true;
    return *this;
}

void Form::setSign(void) { 
    this->_signed = true;
}

std::string Form::getName(void) const {
    return(this->_name);
} 

int Form::getSignGrade(void) const {
    return(this->_signGrade);
}

int Form::getExecGrade(void) const {
    return(this->_execGrade);
}

bool Form::getSign(void) const {
    return(this->_signed);
}