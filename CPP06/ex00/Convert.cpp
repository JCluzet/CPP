/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:51:40 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/24 23:47:54 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <limits>

Convert::Convert(std::string av): _av(av) {
}

Convert::Convert(Convert const & src) {
    (void)src;
}

Convert::~Convert(void) {
}

Convert&  Convert::operator=(Convert const & src) {
    (void)src;
    return (*this);
}

Convert::operator int() const {
    int i = 0;
    std::cout << "int: ";
    try {
        i = std::stoi(_av);
        std::cout << i << std::endl;
    } 
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    return (i);
}

Convert::operator double() const {
    double i = 0;
    std::cout << "double: ";
    try {
        i = std::stod(_av);
        std::cout << std::fixed << std::setprecision(1) << i << std::endl;
    } 
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    return (i);
}

Convert::operator float() const {
    float i = 0;
    std::cout << "float: ";
    try {
        i = std::stof(_av);
        std::cout << std::fixed << std::setprecision(1) << i << "f" << std::endl;
    } 
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    return (i);
}

Convert::operator char() const {
    char i = 0;
    std::cout << "char: ";
    try {
        i = std::stoi(_av);
        if (i < CHAR_MIN || i > CHAR_MAX)
        {
            std::cout << "impossible" << std::endl;
            return(i);
        }
        if (i < 32 || i > 126)
        {
            std::cout << "Non displayable" << std::endl;
            return(i);
        }
        std::cout << "'" << i << "'" << std::endl;
    } 
    catch (std::out_of_range &e) {
        std::cout << "impossible" << std::endl;
    }
    catch (std::invalid_argument &e) {
        std::cout << "impossible" << std::endl;
    }
    return (i);
}

std::ostream    &operator<<(std::ostream &ostream, const Convert &src)
{
    ostream << "Convert";
    (void)src;
    return (ostream);
}