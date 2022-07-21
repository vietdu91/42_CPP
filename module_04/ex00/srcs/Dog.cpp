/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:48:34 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 16:54:12 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Dog::Dog() : Animal() {

	this->_type = "Dog";
	std::cout << PINK_B << "🐶 " << this->_type << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Dog::Dog(Dog const &src) : Animal() {

	*this = src;
	std::cout << GREEN_B << "🐶 An other " << RESET << PINK_B << this->_type \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}

//	 =======        DESTRUCTOR       =======

Dog::~Dog() {

	std::cout << PINK_B << "🌅 " << this->_type << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Dog	&Dog::operator=(Dog const &rhs) {

	this->_type = rhs._type;
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

void	Dog::makeSound() const {

	std::cout << RED_B << "🐶 🔊 " << this->getType() << RESET << YELLOW_B << \
	" said 'OUAF OUAAAF! I want Royal Canin!'!!!" << RESET << std::endl;
	return ;
}
