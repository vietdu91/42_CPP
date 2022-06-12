/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:02:08 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:18:12 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

	std::cout << "A zombie comes out of the ground to eat BRAINNNS 🧟🧠 !!!" << std::endl;
	return ;
}

Zombie::~Zombie() {

	std::cout << this->_name << " destroys itself with great suffering 🧟💥 !!!" << std::endl;
	return ;
}

void	Zombie::announce() const {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::named(std::string name) {

	this->_name = name;
	return ;
}
