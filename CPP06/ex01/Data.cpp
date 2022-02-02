/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:09:47 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/02 21:13:26 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {
}

Data::Data(Data const & src) {
    *this = src;
}

Data::~Data(void) {
}

Data::Data(std::string str) : _str(str) {
    
}

Data&  Data::operator=(Data const & src) {
    _str = src._str;
    return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Data &src)
{
    (void)src;
    ostream << "Data";
    return (ostream);
}