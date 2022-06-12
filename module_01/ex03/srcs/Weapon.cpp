/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:05:14 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 16:01:37 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {

	return ;
}

Weapon::~Weapon() {

	return ;
}

const std::string	&Weapon::getType() {

	return (this->_type);
}

void	Weapon::setType(std::string type) {

	this->_type = type;
	return ;
}
