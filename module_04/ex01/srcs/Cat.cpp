/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:30:25 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 15:44:34 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Cat::Cat() : Animal() {

	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << PINK_B << "🐱 " << this->_type << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Cat::Cat(Cat const &src) : Animal() {

	*this = src;
	std::cout << GREEN_B << "🐱 An other " << RESET << PINK_B << this->_type \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}

//	 =======        DESTRUCTOR       =======

Cat::~Cat() {

	delete this->_brain;
	std::cout << PINK_B << "🌅 " << this->_type << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Cat	&Cat::operator=(Cat const &rhs) {

	this->_type = rhs._type;
	return (*this);
}

Animal	&Cat::operator=(Animal const &rhs)
{
	this->_type = rhs.getType();
	*(this->_brain) = *(rhs.getBrain());
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

void	Cat::makeSound() const {

	std::cout << RED_B << "🐱 🔊 " << this->getType() << RESET << YELLOW_B << \
	" said 'MIAOUUUUWWW! I want Whiskas!'!!!" << RESET << std::endl;
	return ;
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}
