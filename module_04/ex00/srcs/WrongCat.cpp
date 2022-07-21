/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:26:41 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 16:54:26 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

WrongCat::WrongCat() : WrongAnimal() {

	this->_type = "WrongCat";
	std::cout << PINK_B << "🦁 " << this->_type << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal() {

	*this = src;
	std::cout << GREEN_B << "🦁 An other " << RESET << PINK_B << this->_type \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}

//	 =======        DESTRUCTOR       =======

WrongCat::~WrongCat() {

	std::cout << PINK_B << "🌅 " << this->_type << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

WrongCat	&WrongCat::operator=(WrongCat const &rhs) {

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

void	WrongCat::makeSound() const {

	std::cout << RED_B << "🦁 🔊 " << this->getType() << RESET << YELLOW_B << \
	" said 'GROOOOOOOOARRR! I Just Can't Wait To Be King!'!!!" << RESET << std::endl;
	return ;
}
