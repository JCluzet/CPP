/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 02:22:40 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/12 19:12:12 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain{
    public:
        Brain();
        ~Brain();
        Brain(Brain const& other);
        Brain& operator=(Brain const& src);
        std::string identify() const;
    private:
        std::string _ideas[100];
};