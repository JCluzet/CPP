/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:23:09 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/01 03:08:15 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
    std::cout << "Bureaucrat " << this->_name << " created with grade " << this->_grade << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src) {
    os << src.getName() << ", bureaucrat grade " << src.getGrade();
    return os;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &src) {
    this->_grade = src.getGrade();
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name), _grade(src._grade) {
    std::cout << "Bureaucrat copy" << this->_name << " created with grade " << this->_grade << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Bureaucrat " << this->_name << " has been destroyed" << std::endl;
}

const std::string Bureaucrat::getName(void) const {
    return(this->_name);
}

int Bureaucrat::getGrade(void) const {
    return(this->_grade);
}

void Bureaucrat::incrementGrade(void) {
    if (this->_grade != 1)
        this->_grade--;
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void) {
    if (this->_grade != 150)
        this->_grade++;
    else
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &src) {
    if (src.getSignGrade() < this->getGrade())
    {
        throw Bureaucrat::FormNotSignedExceptionalgr();
    }
    if (src.getSign())
    {
        throw Bureaucrat::FormNotSignedExceptional();
    }
    std::cout << this->_name << " signs " << src.getName() << std::endl;
    src.setSign();
}