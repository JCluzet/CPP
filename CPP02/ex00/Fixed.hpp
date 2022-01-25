/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:59:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/25 15:01:11 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>

class Fixed
{
    private:
        int fixed_pt;
        static const int bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const& other);
        int getRawBits(void) const;
        void  setRawBits(int const raw);
        Fixed& operator=(Fixed const & a);
};

std::ostream& operator<<(std::ostream& os, Fixed const& a);