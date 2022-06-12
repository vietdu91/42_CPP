/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:05:35 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 15:52:50 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {

	return ;
}

HumanA::~HumanA() {

	return ;
}

void	HumanA::attack() {

	std::cout << this->_name << " attacks with their " << this->_weapon.getType() \
	<< std::endl;
	return ;
}
