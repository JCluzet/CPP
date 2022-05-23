/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:13:34 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/23 04:26:25 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

void set_homepage();
int is_number(std::string str);

class PhoneBook
{
    public:
        PhoneBook();
        int addContact();
        int searchContact();
        int showContact(int index);

    private:
        Contact user[8];
        int nb_Contact;
};
