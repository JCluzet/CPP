/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 16:58:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/01/25 16:01:41 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

Fixed::Fixed(const int n){
    std::cout << "Int constructor called with   : " << n << std::endl;
    this->fixed_pt = n << this->bits;
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called with : " << n << std::endl;
    this->fixed_pt = roundf(n * (1 << this->bits));
}

Fixed::Fixed(Fixed const& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(void) : fixed_pt(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_pt;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_pt = raw;
}

Fixed& Fixed::operator=(Fixed const& a) {
    std::cout << "Assignation operator called" << std::endl;
    this->fixed_pt = a.getRawBits();
    return(*this);
}

float   Fixed::toFloat(void) const {
    return ((float)this->fixed_pt / (1 << this->bits));
}

int   Fixed::toInt(void) const {
    return ((int)this->fixed_pt >> this->bits);
}

std::ostream&	operator<<(std::ostream & ostream, Fixed const & src) {
	ostream << src.toFloat();
	return (ostream);
}

bool Fixed::operator>(Fixed const& a) const {
    if (this->fixed_pt > a.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<(Fixed const& a) const {
    if (this->fixed_pt < a.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator>=(Fixed const& a) const {
    if (this->fixed_pt >= a.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator<=(Fixed const& a) const {
    if (this->fixed_pt <= a.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator==(Fixed const& a) const {
    if (this->fixed_pt == a.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator!=(Fixed const& a) const {
    if (this->fixed_pt != a.getRawBits())
        return (true);
    return (false);
}

Fixed   Fixed::operator+(Fixed const& a) const{
    return (this->toFloat() + a.toFloat());
}

Fixed   Fixed::operator-(Fixed const &a) const{
    return (this->toFloat() - a.toFloat());
}

Fixed   Fixed::operator*(Fixed const &a) const{
    return (this->toFloat() * a.toFloat());
}

Fixed   Fixed::operator/(Fixed const &a) const{
    return (this->toFloat() / a.toFloat());
}

Fixed& Fixed::operator++(void) {
    this->fixed_pt += 1;
    return(*this);
}

Fixed Fixed::operator++(int){
    Fixed tmp(*this);
    this->fixed_pt += 1;
    return (tmp);
}

Fixed& Fixed::operator--(void) {
    this->fixed_pt -= 1;
    return(*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->fixed_pt -= 1;
    return (tmp);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b){
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}