/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 13:53:45 by emtran            #+#    #+#             */
/*   Updated: 2022/07/19 16:00:37 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

ScavTrap::ScavTrap() : ClapTrap() {

	this->_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << GREEN_B << "🩸 It's up to " << RESET << PINK_B << "ScapTrap " << RESET \
	<< RED_B << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src) {

	this->_hit = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
	std::cout << GREEN_B << "🩸 It's up to an other " << RESET << PINK_B << "ScapTrap " << RESET \
	<< RED_B  << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

ScavTrap::~ScavTrap () {

	std::cout << PINK_B << "🌋 ScavTrap " << RESET << RED_B << this->_name << RESET << PINK_B << \
	" is fainted !" << RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {

	std::cout << GREEN_B << "🩸 It's up to " << RESET << PINK_B << "ScapTrap " << RESET \
	<< RED_B << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

void	ScavTrap::guardGate() {

	std::cout << BLUE_B << "🔥 ScapTrap " << RESET << RED_B << this->_name << RESET << BLUE_B \
	<< " is in mode Gate Keeper! PWOUUUUUAAAAH !" << RESET << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target) {

	if (this->_hit == 0 || this->_energy == 0)
	{
		std::cout << PINK_B << "😱 OUPS! " << CANT_ATTACK << "ScavTrap " << RESET << RED_B << \
		this->_name << RESET << PINK_B << " can't attack! BOOOOOUUH! " << RESET << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << SKY_B << "	🗡️  ScavTrap " << RESET << RED_B << this->_name << RESET << SKY_B << \
	" attacks " << RESET << WHITE_B << target << RESET << SKY_B << ", causing " << RESET << WHITE_B << \
	this->_attack_damage << RESET << SKY_B << " points of damage!" << RESET << std::endl;
	return ;
}
