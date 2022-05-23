/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 01:39:08 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/23 02:58:41 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contacts.hpp"

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

void print_contacts(std::string str)
{
    int i = 0;

    if (str.length() > 10)
    {
        str[9] = '.';
        while (str[i] && i < 10)
        {
            std::cout << str[i];
            i++;
        }
    }
    else
        std::cout << std::setw(10) << str;
}