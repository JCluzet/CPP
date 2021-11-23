/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:13:34 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/24 01:44:35 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

int is_number(std::string str);

class PhoneBook
{
    public:
        PhoneBook();
        int addContact();
        int searchContact();
        int showContact(int index);

    private:
        Contacts user[8];
        int nb_contacts;
};

# endif