/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:15:16 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 02:24:43 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
    public:
        WrongAnimal();
        virtual ~WrongAnimal(void);
        WrongAnimal(WrongAnimal const& other);
        WrongAnimal& operator=(WrongAnimal const& src);
        std::string getType() const ;
        void makeSound() const ;
    protected:
        std::string _type;
};