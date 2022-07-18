/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:10:57 by emtran            #+#    #+#             */
/*   Updated: 2022/07/18 14:34:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), _name("Mister Nobody") {

	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << GREEN_B << "💎 It's up to " << RESET << PINK_B << "DiamondTrap " << RESET \
	<< RED_B  << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), \
ScavTrap(src), FragTrap(src), _name(src._name) {

	std::cout << GREEN_B << "💎 It's up to an other " << RESET << PINK_B <<  "DiamondTrap " << RESET \
	<< RED_B  << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

DiamondTrap::~DiamondTrap () {

	std::cout << PINK_B << "🌋 DiamondTrap " << RESET << RED_B << this->_name << RESET << PINK_B << \
	" is fainted !" << RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs) {

	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), _name(name) {

	std::cout << GREEN_B << "💎 It's up to " << RESET << PINK_B << "DiamondTrap " << RESET \
	<< RED_B  << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

void	DiamondTrap::attack(std::string const &target) {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {

	std::cout << BLUE_B << "💎 DiamondTrap " << RESET << RED_B << this->_name << RESET << BLUE_B \
	<< " is inherited from : " << RESET << PINK_B << this->ClapTrap::getName() << RESET << BLUE_B \
	<< " ! WOOOOOOOOOW ! BRILLANT !" << RESET << std::endl;
	return ;
}
