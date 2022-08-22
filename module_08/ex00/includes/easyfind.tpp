/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:56:46 by emtran            #+#    #+#             */
/*   Updated: 2022/08/22 15:59:41 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(T &container, int const &mustFound) {

	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), mustFound);
	if (it != container.end())
		return (it);
	throw(NoFindNoGain());
}

const char	*NoFindNoGain::what() const throw() {

	return ("\033[1;31mDidn't you find anything? Maybe it's because you're a big loser! 😮‍💨\e[0m");
}
