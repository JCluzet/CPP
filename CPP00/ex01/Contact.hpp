/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 01:40:29 by jcluzet           #+#    #+#             */
/*   Updated: 2022/05/23 03:49:14 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <iomanip>

void print_Contact(std::string str);

class Contact
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