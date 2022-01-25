/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:59:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/25 15:26:34 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
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
        ~Fixed();
        Fixed(Fixed const& other);
        int getRawBits(void) const;
        void  setRawBits(int const raw);
        Fixed& operator=(Fixed const & a);
        float toFloat(void) const;
        int toInt(void) const;

        bool operator>(Fixed const& a) const;
        bool operator<(Fixed const& a) const;
        bool operator>=(Fixed const& a) const;
        bool operator<=(Fixed const& a) const;
        bool operator==(Fixed const& a) const;
        bool operator!=(Fixed const& a) const;

        Fixed operator+(Fixed const& a) const;
        Fixed operator-(Fixed const& a) const;
        Fixed operator*(Fixed const& a) const;
        Fixed operator/(Fixed const& a) const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed const& min(Fixed const& a, Fixed const& b);
        static Fixed const& max(Fixed const& a, Fixed const& b);
        static Fixed& min(Fixed& a, Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b); 
};

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src);