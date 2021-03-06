/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:30:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/05 18:37:21 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void display(T const & elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void iter(T *tab, int len, void fct(T const & elem))
{
    for (int i = 0; i < len; i++)
        fct(tab[i]);
}
