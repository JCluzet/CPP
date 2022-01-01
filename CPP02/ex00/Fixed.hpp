/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:59:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/01 19:17:04 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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

#endif