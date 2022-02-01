/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 01:52:45 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/01 15:39:50 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), _target(src._target) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
    std::cout << "RobotomyRequestForm operator= called" << std::endl;
    this->_target = src._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const {
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &src) const {
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
    
    std::cout << "* BSSSSI BSIIII BSZII *" << std::endl;
    srand(time(NULL));
    if (rand() % 2 == 0)
        std::cout << this->getTarget() + " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getTarget() + " has failed to be robotomized" << std::endl;
}

std::ostream& operator<<(std::ostream &o, const RobotomyRequestForm &src) {
    o << "Form " << src.getName() << " with grade " << src.getSignGrade() << " and " << src.getExecGrade() << std::endl;
    return o;
}