/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <jcluzet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:27:44 by jcluzet           #+#    #+#             */
/*   Updated: 2022/02/05 16:45:37 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array 
{
    public:
        Array(void) : _size(1), _array(new T[_n], _array[0](0)) {
            std::cout << "Default Constructor Array<T> called" << std::endl;
        }
        Array(unsigned int n) : _size(n), _array(new T[_size]) {
            std::cout << "Constructor Array<T> called" << std::endl;
        }
        Array(Array const & src) : _size(src._size), _array(new T[_size]) {
            std::cout << "Copy Constructor Array<T> called" << std::endl;
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = src._array[i];
        }
        ~Array(void) {
            delete [] _array;
            std::cout << "Destructor Array<T> called" << std::endl;
        }
        Array & operator=(Array const & src) {
            delete [] _array;
            _size = src._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = src._array[i];
        }
        T & operator[](unsigned int n)
        {
            if (n >= _size)
                throw std::exception();
            return _array[n];
        }
        T const & operator[](unsigned int n) const;
        unsigned int size(void) const;
        void fill(T const & value);
        void fill(T const & value, unsigned int start, unsigned int end);
        void swap(unsigned int i, unsigned int j);
        void sort(void);
        void reverse(void);
        void print(void) const;
    private:
        T * _array;
        unsigned int _size;
};
}