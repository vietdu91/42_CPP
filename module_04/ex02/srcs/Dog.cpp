/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:48:34 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 16:25:17 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Dog.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Dog::Dog() : AAnimal() {

	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << PINK_B << "🐶 Dog" << RESET << GREEN_B << " was born !" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Dog::Dog(Dog const &src) : AAnimal() {

	*this = src;
	std::cout << GREEN_B << "🐶 An other " << RESET << PINK_B << "Dog" \
	<< RESET << GREEN_B << " was born !" << RESET << std::endl;
	return ;
}

//	 =======        DESTRUCTOR       =======

Dog::~Dog() {

	delete this->_brain;
	std::cout << PINK_B << "🌅 Dog" << RESET << RED_B << " lived a very good life..." \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Dog	&Dog::operator=(Dog const &rhs) {

	this->_type = rhs._type;
	return (*this);
}

AAnimal	&Dog::operator=(AAnimal const &rhs)
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

void	Dog::makeSound() const {

	std::cout << RED_B << "🐶 🔊 " << this->getType() << RESET << YELLOW_B << \
	" said 'OUAF OUAAAF! I want Royal Canin!'!!!" << RESET << std::endl;
	return ;
}

Brain	*Dog::getBrain() const
{
	return (this->_brain);
}
