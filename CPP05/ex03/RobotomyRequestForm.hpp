/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:43:32 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 20:21:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm(void);
        std::string getTarget(void) const;
        RobotomyRequestForm&     operator=(RobotomyRequestForm const & src);
        void execute(Bureaucrat const &src) const;
    private :
        std::string _target;
};

std::ostream    &operator<<(std::ostream &ostream, const RobotomyRequestForm &src);