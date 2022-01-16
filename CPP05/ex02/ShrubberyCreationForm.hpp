/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:47:58 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 21:16:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class  ShrubberyCreationForm : public Form
{
    public:
        ShrubberyCreationForm(std::string target);
        std::string getTarget(void) const;
        ShrubberyCreationForm(ShrubberyCreationForm const &src);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &src) const;
        class ErrorFileException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return("File error");
                }
        };
    private:
        std::string _target;
};