/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:20:32 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/15 22:38:31 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<string>
#include<exception>

template <typename T> class Array{
    private:
        unsigned int    _size;
        T*               _array;
        
    public:
        Array() : _size(0), _array(new T[0]){
            std::cout << "Array default constructor called" << std::endl;
        }
        
        Array(unsigned int i) : _size(i), _array(new T[i]) {
            std::cout << "Array parameterized constructor called" << std::endl;
        }
        
        Array(const Array &other) {
            std::cout << "Array copy constructor called" << std::endl;
            _array = new T[other._size];
            for(_size = 0; _size < other._size; _size++)
                _array[_size] = other._array[_size];
        }
        
        Array& operator=(const Array &other) {
            std::cout << "Array copy assignement operator called" << std::endl;
            delete[] _array;
            _array = new T[other._size];
            for(_size = 0; _size < other._size; _size++)
                _array[_size] = other._array[_size];
        }
        
        T& operator[](unsigned int i) {
            if (i >= _size)
                throw OutOfBounds();
            return (_array[i]);
        }

        ~Array() {
            std::cout << "Array destructor called" << std::endl;
            delete[] _array;
        }

        int size(void) const {
            return _size; 
        }

        class OutOfBounds : public std::exception {
            const char* what() const throw() {
                return("Index is out of bound");
            }
        };
};

#endif