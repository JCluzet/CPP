/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:22:47 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/15 20:34:39 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &);
        Bureaucrat& operator=(const Bureaucrat &);
        const std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        void signForm(Form &src);
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("Grade too low");
                }
        };
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("Grade too high");
                }
        };
        class FormNotSignedExceptional : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("Cannot sign form because already sign");
                }
        };
        class FormNotSignedExceptionalgr : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("Cannot sign form because grade too low");
                }
        };
    private:
        std::string const _name;
        int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src);