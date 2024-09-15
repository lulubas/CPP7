/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:20:32 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/13 16:21:55 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include<iostream>
#include<string>


template<typename T, typename V > void iter(T arr[], int n, V fct) {
    int i;
    for (i=0;i<n;i++)
        fct(arr[i]);
}

template<typename T> void printElement(T i) {
    std::cout << " " << i;
}

#endif
