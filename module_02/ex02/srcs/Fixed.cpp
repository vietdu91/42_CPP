/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:58:54 by emtran            #+#    #+#             */
/*   Updated: 2022/06/19 15:24:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Fixed::Fixed() {

	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Fixed::Fixed(Fixed const &src) {

	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

Fixed::~Fixed() {

	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Fixed	&Fixed::operator=(Fixed const &rhs) {

	this->_nb_fixed = rhs.getRawBits();
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

Fixed::Fixed(int const nb_int) {

	this->_nb_fixed = nb_int << this->_bits;
	return ;
}

Fixed::Fixed(float const nb_float) {

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

bool	Fixed::operator>(Fixed const &rhs) const {

	if (this->_nb_fixed > rhs._nb_fixed)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const {

	if (this->_nb_fixed < rhs._nb_fixed)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const {

	if (this->_nb_fixed >= rhs._nb_fixed)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const {

	if (this->_nb_fixed <= rhs._nb_fixed)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const {

	if (this->_nb_fixed == rhs._nb_fixed)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const {

	if (this->_nb_fixed != rhs._nb_fixed)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const {

	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const {

	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const {

	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const {

	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++() {

	this->_nb_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	fixed = *this;
	
	this->_nb_fixed++;
	return (fixed);
}

Fixed	&Fixed::operator--() {

	this->_nb_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	fixed = *this;

	this->_nb_fixed--;
	return (fixed);
}


//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

Fixed		&Fixed::min(Fixed &a, Fixed &b) {

	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b) {

	if (a < b)
		return (a);
	return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b) {

	if (a > b)
		return (a);
	return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {

	if (a > b)
		return (a);
	return (b);
}

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
