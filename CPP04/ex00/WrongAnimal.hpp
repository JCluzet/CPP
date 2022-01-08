/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:15:16 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/08 02:04:23 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
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

#endif