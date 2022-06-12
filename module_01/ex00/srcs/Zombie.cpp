/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 11:12:03 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:19:46 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << this->_name << " comes out of the ground to eat BRAINNNS 🧟🧠 !!!" << std::endl;
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
