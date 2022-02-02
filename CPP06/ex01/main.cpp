/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:06:14 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/02 21:20:57 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data dat("This is a message!");

    uintptr_t tmp = serialize(&dat);
    
    std::cout << "Serialize       : " << tmp << std::endl;
    std::cout << "Deserialize     : " << deserialize(tmp) << std::endl << std::endl;

    std::cout << "Re Serialize    : " << serialize(deserialize(tmp)) << std::endl;
    std::cout << "Re DeSerialize  : " << deserialize(serialize(deserialize(tmp))) << std::endl << std::endl;

    std::cout << "Serialize???    : " << deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(serialize(deserialize(tmp))))))))))))))))))))))))) << std::endl;
    return (0);
}