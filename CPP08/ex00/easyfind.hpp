/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:26:00 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/08 03:23:16 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void easyfind(T &a, int len) 
{
    typename T::iterator it = std::find(a.begin(), a.end(), len);
    if (it != a.end())
        std::cout << "Element found at position " << std::distance(a.begin(), it) << std::endl;
    else
    {
        std::cout << "Element not found" << std::endl;
        throw std::exception();
    }
}