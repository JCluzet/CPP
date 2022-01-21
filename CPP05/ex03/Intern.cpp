/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:23:03 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/21 17:04:59 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern(void) {
    std::cout << "Intern created" << std::endl;
}

Intern::Intern(Intern const & src) {
    (void)src;
    std::cout << "Intern copied." << std::endl;
}

Intern::~Intern(void) {
    std::cout << "Intern destroyed." << std::endl;
}

Intern&  Intern::operator=(Intern const & src) {
    (void)src;
    return (*this);
}

static Form	*newRobotForm(std::string target)
{
	Form	*robot = new RobotomyRequestForm(target);
	return (robot);
}

static Form	*newPresidentForm(std::string target)
{
	Form	*president = new PresidentialPardonForm(target);
	return (president);
}

static Form	*newShrubberyForm(std::string target)
{
	Form	*shrubbery = new ShrubberyCreationForm(target);
	return (shrubbery);
}

Form	*Intern::makeForm(std::string formType, std::string formTarget)
{
	Form	*(*newForm[3])(std::string target) = { newRobotForm, newPresidentForm, newShrubberyForm};
	std::string	msg[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (formType == msg[i])
			return newForm[i](formTarget);
	}
	std::cout << "Intern can't make a form \"" << formType << "\" this form type doesn't exist." << std::endl;
	return NULL;
}