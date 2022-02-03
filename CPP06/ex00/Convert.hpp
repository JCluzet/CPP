/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:51:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/03 16:08:35 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Convert
{
    public:
        Convert();
        Convert(std::string av);
        Convert(Convert const & src);
        ~Convert(void);

        operator int() const;
        operator char() const;
        operator float() const;
        operator double() const;

        Convert&     operator=(Convert const & src);
    private:
        std::string _av;
};

std::ostream    &operator<<(std::ostream &ostream, const Convert &src);