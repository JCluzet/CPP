/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:09:41 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/23 02:13:01 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

int PhoneBook::addContact()
{
    std::string input;
    
    if (PhoneBook::nb_contacts == 8)
    {
        std::cout << "Error : Memory full" << std::endl;
        return (-1);
    }
    std::cout << "\n------ NEW CONTACT ------\n\nFIRST NAME       ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setFname(input);
    std::cout << "LAST NAME        ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setLname(input);
    std::cout << "NICKNAME         ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setNname(input);
    std::cout << "NUMBER           ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setnumber(input);
    std::cout << "DARKEST SECRET'S ➔ ";
    std::getline(std::cin, input);
    user[PhoneBook::nb_contacts].setsecrets(input);
    user[PhoneBook::nb_contacts].setid(PhoneBook::nb_contacts);
    PhoneBook::nb_contacts++;
    std::cout << std::endl;
    return (1);
}

std::string Contacts::get_fname() const
{
    return m_fname;
}

std::string Contacts::get_lname() const
{
    return m_lname;
}

std::string Contacts::get_nname() const
{
    return m_nname;
}

std::string Contacts::get_pnumber() const
{
    return m_pnumber;
}

std::string Contacts::get_secrets() const
{
    return m_secrets;
}

int Contacts::get_id() const
{
    return m_id;
}


int PhoneBook::searchContact()
{
    int i = 0;

    while (i < PhoneBook::nb_contacts)
    {
        // print user[i].get_id();
        std::cout << user[i].get_id() << std::endl;
        std::cout << user[i].get_fname() << std::endl;
        std::cout << user[i].get_lname() << std::endl;
        std::cout << user[i].get_nname() << std::endl;
        std::cout << user[i].get_pnumber() << std::endl;
        std::cout << user[i].get_secrets() << std::endl;
        i++;
    }
    return(0);
}

void Contacts::setFname(std::string str)
{
    m_fname = str;
}

void Contacts::setLname(std::string str)
{
    m_lname = str;
}

void Contacts::setNname(std::string str)
{
    m_nname = str;
}

void Contacts::setnumber(std::string str)
{
    m_pnumber = str;
}

void Contacts::setsecrets(std::string str)
{
    m_secrets = str;
}

void Contacts::setid(int nb)
{
    m_id = nb;
}

bool ft_strcmp(std::string str, std::string cmd)
{
    int i = 0;

    while (str[i] == cmd[i] && str[i])
        i++;
    if ((str[i] - cmd[i]) != 0)
        return (0);
    return(1);
}

PhoneBook::PhoneBook()
{
    nb_contacts = 0;
}