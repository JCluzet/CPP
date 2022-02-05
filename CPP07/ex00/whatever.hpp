/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:34:06 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/05 18:34:19 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(const T a, const T b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T max(const T a, const T b)
{
    if (a > b)
        return (a);
    else
        return (b);
}