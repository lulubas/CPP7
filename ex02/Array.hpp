/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:20:32 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/13 16:59:48 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include<string>


template <typename T> class Array{
    private:
        T _array[];
    public:
        Array() {}
        Array(unsinged int unint) {}
        Array(const Array &other) {}
        &Array operator=(const Array &other) {}

        int size(void) {}    
}

template<typename T, typename V > void iter(T arr[], int n, V fct) {
    int i;
    for (i=0;i<n;i++)
        fct(arr[i]);
}

template<typename T> void printElement(T i) {
    std::cout << " " << i;
}

#endif
