/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:20:32 by lbastien          #+#    #+#             */
/*   Updated: 2024/09/12 12:48:46 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include<iostream>
#include<string>

template<typename T> void swap(T a, T b) {
    int tmp = a;
    a = b;
    b = tmp;
}

#endif
