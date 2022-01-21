/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:53:12 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 21:26:17 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form(std::string name, const int signGrade, const int execGrade);
        ~Form();
        Form(const Form &src);
        Form& operator=(const Form &src);
        std::string getName(void) const;
        int getSignGrade(void) const;
        int getExecGrade(void) const;
        virtual void execute(Bureaucrat const &src) const = 0;
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
        class FormAlreadySignedException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("Form already signed");
                }
        };
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("Form not signed");
                }
        };
        Form& beSigned(Bureaucrat &candidate);
        void signForm(Bureaucrat &candidate);
        bool getSign(void) const;
        void setSign(void);
    private:
        std::string const _name;
        const int _signGrade;
        const int _execGrade;
        bool    _signed;
};

std::ostream &operator<<(std::ostream &ostream, Form const &src);