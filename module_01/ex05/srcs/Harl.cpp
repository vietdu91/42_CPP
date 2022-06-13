/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:42:48 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 14:39:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {

	return ;
}

Harl::~Harl() {

	return ;
}

void	Harl::_debug() {

	std::cout << DEBUG << std::endl;
	return ;
}

void	Harl::_info() {

	std::cout << INFO << std::endl;
	return ;
}

void	Harl::_warning() {

	std::cout << WARNING << std::endl;
	return ;
}

void	Harl::_error() {

	std::cout << ERROR << std::endl;
	return ;
}

void	Harl::complain(std::string level) {

	size_t	i;
	std::string	tab_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, \
				&Harl::_warning, &Harl::_error};

	for (i = 0; i < 4; i++)
	{
		if (level == tab_level[i])
			(this->*f[i])();
	}
	return ;
}
