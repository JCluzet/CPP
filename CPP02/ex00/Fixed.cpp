/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:58:44 by jcluzet           #+#    #+#             */
/*   Updated: 2021/12/22 17:22:36 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Fixed.hpp"

Fixed &Fixed::operator=(Fixed const& a)
{
    Fixed copie(a);   //On utilise le constructeur de copie de la classe Fixed !
    copie.fixed_pt = a.fixed_pt;       //On appelle la méthode d'addition qui modifie l'objet 'copie'
    
    return copie;     //Et on renvoie le résultat. Ni a ni b n'ont changé.
}