/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:11:32 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/21 16:18:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
    std::cout << "Karen created" << std::endl;
}

Karen::~Karen(void) {
    std::cout << "Karen destroyed." << std::endl;
}

void    Karen::complain(std::string level) {
    std::string s[4] = {"debug", "info", "warning", "error"};
    void    (Karen::*f[4])(void)const = {&Karen::_debug,
                                    &Karen::_info,
                                    &Karen::_warning,
                                    &Karen::_error};
    for (int i = 0; i < 4; i++)
        if (s[i] == level)
        {
            (this->*f[i])();
        }
}

void    Karen::_debug(void) const{
    std::cout << "Where are you from?" << std::endl;
}

void    Karen::_info(void) const{
    std::cout << "I can’t get oxygen through a mask." << std::endl;
}

void    Karen::_warning(void) const{
    std::cout << "I’ve been waiting in line for 15 minutes!" << std::endl;
}

void    Karen::_error(void) const{
    std::cout << "This is the United States of America!" << std::endl;
}