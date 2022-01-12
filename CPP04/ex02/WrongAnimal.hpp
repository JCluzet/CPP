/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 00:15:16 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/08 02:12:12 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
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