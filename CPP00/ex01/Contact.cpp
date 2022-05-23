/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 01:39:08 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/23 02:58:41 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

std::string Contact::get_fname() const
{
    return m_fname;
}

std::string Contact::get_lname() const
{
    return m_lname;
}

std::string Contact::get_nname() const
{
    return m_nname;
}

std::string Contact::get_pnumber() const
{
    return m_pnumber;
}

std::string Contact::get_secrets() const
{
    return m_secrets;
}

int Contact::get_id() const
{
    return m_id;
}

void Contact::setFname(std::string str)
{
    m_fname = str;
}

void Contact::setLname(std::string str)
{
    m_lname = str;
}

void Contact::setNname(std::string str)
{
    m_nname = str;
}

void Contact::setnumber(std::string str)
{
    m_pnumber = str;
}

void Contact::setsecrets(std::string str)
{
    m_secrets = str;
}

void Contact::setid(int nb)
{
    m_id = nb;
}

void print_Contact(std::string str)
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