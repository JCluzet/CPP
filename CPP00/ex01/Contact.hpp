/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 01:40:29 by jcluzet           #+#    #+#             */
/*   Updated: 2021/11/24 01:41:06 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

void print_contacts(std::string str);

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

#endif