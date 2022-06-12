/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:05:20 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 16:07:05 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {

	return ;
}

HumanB::~HumanB() {

	return ;
}

void	HumanB::attack() {

	std::cout << this->_name << " attacks with their " << this->_weapon->getType() \
	<< std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {

	this->_weapon = &weapon;
	return ;
}
