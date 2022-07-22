/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:15:14 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 15:28:24 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Animal::Animal() : _type("Animal") {

	std::cout << PINK_B << "🐾 Animal" << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Animal::Animal(Animal const &src) {

	*this = src;
	std::cout << GREEN_B << "🐾 An other " << RESET << PINK_B << "Animal" \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}
//	 =======        DESTRUCTOR       =======

Animal::~Animal() {

	std::cout << PINK_B << "🌅 Animal" << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Animal	&Animal::operator=(Animal const &rhs) {

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

std::string const	Animal::getType() const {

	return (_type);
}

void	Animal::makeSound() const {

	std::cout << RED_B << "🐾 🔊 " << this->getType() << RESET << BLUE_B << \
	" said 'I'M ALIIIIIVE BITCH'!!!" << RESET << std::endl;
	return ;
}
