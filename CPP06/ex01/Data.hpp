/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:09:26 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/03 01:27:17 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Data
{
    public:
        Data(void);
        Data(std::string str);
        Data(Data const & src);
        ~Data(void);

        Data&     operator=(Data const & src);

    private :
        std::string _str;
};

std::ostream    &operator<<(std::ostream &ostream, const Data &src);