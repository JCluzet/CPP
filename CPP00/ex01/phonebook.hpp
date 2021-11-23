/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:13:34 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/23 02:13:45 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

bool ft_strcmp(std::string str, std::string cmd);

class Contacts
{
    // Méthodes

    public:
    void setFname(std::string str);
    void setLname(std::string str);
    void setNname(std::string str);
    void setnumber(std::string str);
    void setsecrets(std::string str);
    void setid(int nb);
    std::string get_secrets() const;
    std::string get_pnumber() const;
    std::string get_nname() const;
    std::string get_lname() const;
    std::string get_fname() const;
    int get_id() const;

    // Attributs

    private:
    int m_id;
    std::string m_fname;
    std::string m_lname;
    std::string m_nname;
    std::string m_pnumber;
    std::string m_secrets;
};

class PhoneBook
{
    public:
        PhoneBook();
        int addContact();
        int searchContact();

    private:
        Contacts user[8];
        int nb_contacts;
};

# endif