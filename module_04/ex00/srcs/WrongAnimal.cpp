/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:23:47 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 17:07:19 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {

	std::cout << PINK_B << "👽 " << this->_type << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	*this = src;
	std::cout << GREEN_B << "👽 An other " << RESET << PINK_B << this->_type \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}
//	 =======        DESTRUCTOR       =======

WrongAnimal::~WrongAnimal() {

	std::cout << PINK_B << "🌅 WrongAnimal" << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs) {

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

std::string const	WrongAnimal::getType() const {

	return (_type);
}

void	WrongAnimal::makeSound() const {

	std::cout << RED_B << "👽 🔊 " << this->getType() << RESET << BLUE_B << \
	" said 'GSAFOVCPVXAXNZSIIIIIIX'!!!" << RESET << std::endl;
	return ;
}
