/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:04:50 by emtran            #+#    #+#             */
/*   Updated: 2022/08/18 13:55:34 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstdlib>
# include "colors.hpp"

template<typename T>
void	iter(T *array, size_t length, void (*func)(T &content)) {

	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template<typename T>
void	iter(T const *array, size_t const length, void (*func)(T const &content)) {

	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
