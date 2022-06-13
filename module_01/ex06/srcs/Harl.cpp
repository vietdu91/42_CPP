/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:44:14 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 16:24:26 by emtran           ###   ########.fr       */
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

	i = 0;
	while (i < 4 && level != tab_level[i])
		i++;
	switch (i)
	{
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
			break ;
		default:
			std::cout << ELSE << std::endl;
			break ;
	}
	return ;
}
