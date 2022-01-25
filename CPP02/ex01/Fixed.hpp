/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:59:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/25 15:25:11 by jcluzet          ###   ########.fr       */
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
        Fixed(const int n);
        Fixed(const float n);
        Fixed(Fixed const& other);
        Fixed& operator=(Fixed const & a);
        ~Fixed();
        int getRawBits(void) const;
        void  setRawBits(int const raw);

        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src);