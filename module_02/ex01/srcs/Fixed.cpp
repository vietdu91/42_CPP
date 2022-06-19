/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 09:30:09 by emtran            #+#    #+#             */
/*   Updated: 2022/06/19 12:01:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_nb_fixed = rhs.getRawBits();
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

Fixed::Fixed(int const nb_int) {

	std::cout << "Int constructor called" << std::endl;
	this->_nb_fixed = nb_int << this->_bits;
	return ;
}

Fixed::Fixed(float const nb_float) {

	std::cout << "Float constructor called" << std::endl;
	this->_nb_fixed = roundf(nb_float * (float)(1 << this->_bits));
 	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return (o);
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

int		Fixed::getRawBits() const {

	return (this->_nb_fixed);
}

void	Fixed::setRawBits(int const raw) {

	this->_nb_fixed = raw;
	return ;
}

int		Fixed::toInt() const {

	return (this->_nb_fixed >> this->_bits);
}

float	Fixed::toFloat() const {

	return ((float) this->_nb_fixed / (float)(1 << this->_bits));
}
