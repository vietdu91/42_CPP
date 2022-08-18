/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:00:17 by emtran            #+#    #+#             */
/*   Updated: 2022/08/16 15:42:39 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <cstdlib>
# include "colors.hpp"

template<typename T>
void	swap(T &a, T &b) {

	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const	&min(T &a, T &b) {

	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T const	&max(T &a, T &b) {

	if (a > b)
		return (a);
	return (b);
}

#endif
