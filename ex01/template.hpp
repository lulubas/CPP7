/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:20:32 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/13 11:43:41 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include<iostream>
#include<string>



template<typename T> void swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T> T min(T a, T b) {
    if (a < b )
        return a;
    return b; 
}

template<typename T> T max(T a, T b) {
    if (a > b )
        return a;
    return b;
}
#endif
