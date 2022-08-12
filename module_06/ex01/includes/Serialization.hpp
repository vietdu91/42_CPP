/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:31:00 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 16:38:52 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>
# include "colors.hpp"

typedef struct s_data
{
	int			Int;
	void		*intPtr;
	std::string	Str;
} Data;

uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);

#endif
