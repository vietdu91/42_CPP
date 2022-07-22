/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:15:14 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 15:28:24 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

AAnimal::AAnimal() : _type("AAnimal") {

	std::cout << PINK_B << "🐾 AAnimal" << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

AAnimal::AAnimal(AAnimal const &src) {

	*this = src;
	std::cout << GREEN_B << "🐾 An other " << RESET << PINK_B << "AAnimal" \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}

//	 =======        DESTRUCTOR       =======

AAnimal::~AAnimal() {

	std::cout << PINK_B << "🌅 AAnimal" << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

AAnimal	&AAnimal::operator=(AAnimal const &rhs) {

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

std::string const	AAnimal::getType() const {

	return (_type);
}

void	AAnimal::makeSound() const {

	std::cout << RED_B << "🐾 🔊 " << this->getType() << RESET << BLUE_B << \
	" said 'I'M ALIIIIIVE BITCH'!!!" << RESET << std::endl;
	return ;
}
