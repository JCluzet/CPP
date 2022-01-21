/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:43:32 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/16 20:17:00 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:

        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const & src);
        ~PresidentialPardonForm(void);
        std::string getTarget(void) const;
        PresidentialPardonForm&     operator=(PresidentialPardonForm const & src);
        void execute(Bureaucrat const &src) const;
    private :
        std::string _target;
};

std::ostream    &operator<<(std::ostream &ostream, const PresidentialPardonForm &src);