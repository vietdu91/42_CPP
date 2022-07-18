/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:38:56 by emtran            #+#    #+#             */
/*   Updated: 2022/07/18 14:37:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

FragTrap::FragTrap() : ClapTrap() {

	std::cout << GREEN_B << "🩸 It's up to " << RESET << PINK_B << "FragTrap " << RESET \
	<< RED_B << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {

	std::cout << GREEN_B << "🩸 It's up to an other " << RESET << PINK_B << "FragTrap " << RESET \
	<< RED_B  << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

FragTrap::~FragTrap () {

	std::cout << PINK_B << "🌋 FragTrap " << RESET << RED_B << this->_name << RESET << PINK_B << \
	" is fainted !" << RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

FragTrap	&FragTrap::operator=(FragTrap const &rhs) {

	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {

	std::cout << GREEN_B << "🩸 It's up to " << RESET << PINK_B << "FrapTrap " << RESET \
	<< RED_B << this->_name << RESET << GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

void	FragTrap::highFivesGuys() {

	std::cout << BLUE_B << "🔥 FragTrap " << RESET << RED_B << this->_name << RESET << BLUE_B \
	<< " asks to be in mode HighFivesGuys, please ! ZBOUUUUUUUUUUUUB !" << RESET << std::endl;
	return ;
}

void	FragTrap::attack(const std::string &target) {

	if (this->_hit == 0 || this->_energy == 0)
	{
		std::cout << PINK_B << "😱 OUPS! " << CANT_ATTACK << "FragTrap " << RESET << RED_B << \
		this->_name << RESET << PINK_B << " can't attack! BOOOOOUUH! " << RESET << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << SKY_B << "	🗡️  FragTrap " << RESET << RED_B << this->_name << RESET << SKY_B << \
	" attacks " << RESET << WHITE_B << target << RESET << SKY_B << ", causing " << RESET << WHITE_B << \
	this->_attack_damage << RESET << SKY_B << " points of damage!" << RESET << std::endl;
	return ;
}
