/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:06:26 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 14:06:56 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "colors.hpp"

class Brain {

	public :
		Brain();
		Brain(Brain const &src);
		~Brain();

		Brain	&operator=(Brain const &rhs);

		std::string	ideas[100];
};

#endif
