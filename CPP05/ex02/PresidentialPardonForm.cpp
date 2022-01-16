/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:41:36 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 21:19:35 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target) {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src), _target(src._target) {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
    std::cout << "PresidentialPardonForm operator= called" << std::endl;
    this->_target = src._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const {
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &src) const {
    if (src.getGrade() > this->getExecGrade())
    {
        std::cout << src.getName() + " are not high enough to execute this form" << std::endl;
        throw Form::GradeTooLowException();
    }
    else if (!this->getSign()) {
        std::cout << this->getName() + " cannot be executed because it is not signed" << std::endl;
        throw Form::FormNotSignedException();
    }
    std::cout << src.getName() + " executes " + this->getName() << std::endl;

    std::cout << this->getTarget() + " has been pardoned by Zafod Beeblebrox." << std::endl;
}