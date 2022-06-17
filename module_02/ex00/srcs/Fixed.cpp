/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:35:36 by emtran            #+#    #+#             */
/*   Updated: 2022/06/17 16:36:23 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed() {

	std::cout << "Deconstructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs) {

	std::cout << "Copy assignement operator called" << std::endl;
	this->_nb_fixed = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits() const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb_fixed);
}

void	Fixed::setRawBits(int const raw) {

	this->_nb_fixed = raw;
	return ;
}
