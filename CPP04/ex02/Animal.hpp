/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:15:16 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/31 03:35:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class  Animal {
    public:
        Animal();
        virtual ~Animal(void);
        Animal(Animal const& other);
        Animal& operator=(Animal const& src);
        std::string getType() const ;
        virtual void makeSound() const = 0;
    protected:
        std::string _type;
};