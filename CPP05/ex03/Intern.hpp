/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:29:52 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/21 17:04:41 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Intern
{
    public:

        Intern(void);
        Intern(Intern const & src);
        ~Intern(void);
        Form	*makeForm(std::string formType, std::string formTarget);
        Intern&     operator=(Intern const & src);
};

std::ostream    &operator<<(std::ostream &ostream, const Intern &src);