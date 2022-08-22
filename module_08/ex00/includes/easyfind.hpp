/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:46:46 by emtran            #+#    #+#             */
/*   Updated: 2022/08/22 15:59:38 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <cstdlib>
# include <vector>
# include <list>
# include <algorithm>
# include <exception>
# include "colors.hpp"

class NoFindNoGain: public std::exception {

	public:
		virtual const char *what() const throw();
};

template <typename T>
typename T::iterator	easyfind(T &container, int const &mustFound);

std::ostream	&operator<<(std::ostream &o, int *array);
std::ostream	&operator<<(std::ostream &o, int const *array);

# include "easyfind.tpp"

# endif
