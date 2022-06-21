/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:17:40 by emtran            #+#    #+#             */
/*   Updated: 2022/06/21 15:53:04 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

ClapTrap::ClapTrap() : _name("Mister Nobody"), _hit(10), _energy(10), \
_attack_damage(0) {

	std::cout << GREEN_B << "🩸 It's up to " << RESET << RED_B << this->_name << RESET \
	<< GREEN_B << " to FIGHT !" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name) {

	std::cout << GREEN_B << "🩸 It's up to an other " << RESET << RED_B << this->_name << RESET \
	<< GREEN_B << " to FIGHT !" << RESET << std::endl;
	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

ClapTrap::~ClapTrap () {

	std::cout << PINK_B << "🌋 ClapTrap " << RESET << RED_B << this->_name << RESET << PINK_B << \
	" is fainted !" << RESET << std::endl;
	return ;
}
//	 =======  COPY ASSIGNEMENT OPER. =======

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

ClapTrap::ClapTrap(std::string const name) : _name(name), _hit(10), _energy(10), \
_attack_damage(0) {

	std::cout << GREEN_B << "🩸 It's up to " << RESET << RED_B << this->_name << RESET << GREEN_B << \
	" to FIGHT !" << RESET << std::endl;
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	this->_name = rhs._name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}
//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hit == 0)
	{
		std::cout << PINK_B << "💀 Claptrap " << RESET << RED_B << this->_name << RESET << RED_B << \
		" is \033[1;31mKOOOO\e[0m\033[1;95m !!! IPPONED ! " << RESET << std::endl;
		return ;
	}
	if (amount > this->_hit)
		this->_hit = 0;
	else
	{
		this->_hit -= amount;
	}
	std::cout << YELLOW_B << "	💊 OUCHHH !!! Claptrap " << RESET << RED_B << this->_name << RESET << \
	YELLOW_B << " received " << RESET << WHITE_B << amount << RESET << YELLOW_B << \
	" damages! He has " << RESET << WHITE_B << this->_hit << RESET << YELLOW_B << " life points left! Get a grip!" \
	<< RESET << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_hit == 0 || this->_energy == 0)
	{
		std::cout << PINK_B << "😱 OUPS! Claptrap " << RESET << RED_B << this->_name << RESET << \
		PINK_B << CANT_REPAIRED << RESET << std::endl;
		return ;
	}
	this->_energy--;
	if (amount + this->_hit < this->_hit)
		this->_hit = UINT_MAX;
	else
		_hit += amount;
	std::cout << BLUE_B << "	🌟 Claptrap " << RESET << RED_B << this->_name << RESET << BLUE_B << REPAIRED << \
	RESET << WHITE_B << this->_hit << RESET << BLUE_B << " extra life points!" << RESET << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target) {

	if (this->_hit == 0 || this->_energy == 0)
	{
		std::cout << PINK_B << "😱 OUPS! " << CANT_ATTACK << "Claptrap " << RESET << RED_B << \
		this->_name << RESET << PINK_B << " can't attack! BOOOOOUUH! " << RESET << std::endl;
		return ;
	}
	this->_energy--;
	std::cout << SKY_B << "	🗡️  ClapTrap " << RESET << RED_B << this->_name << RESET << SKY_B << \
	" attacks " << RESET << WHITE_B << target << RESET << SKY_B << ", causing " << RESET << WHITE_B << \
	this->_attack_damage << RESET << SKY_B << " points of damage!" << RESET << std::endl;
	return ;
}
