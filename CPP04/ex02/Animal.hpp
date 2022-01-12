/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:15:16 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/12 19:41:52 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
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

#endif