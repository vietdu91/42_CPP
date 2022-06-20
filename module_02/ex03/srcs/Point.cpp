/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:38:36 by emtran            #+#    #+#             */
/*   Updated: 2022/06/20 08:57:42 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Point::Point() {

	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Point::Point(Point const &src) : _x(src.get_x()), _y(src.get_y()) {

	return ;
}

//	 =======        DESTRUCTOR       =======

Point::~Point() {

	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Point	&Point::operator=(Point const &rhs) {

	(void)rhs;
	return(*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {

	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

std::ostream	&operator<<(std::ostream &o, Point const &rhs)
{
	o << "(" << rhs.get_x() << ", " << rhs.get_y() << ");";
	return (o);
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

Fixed	Point::get_x() const {

	return (this->_x);
}

Fixed	Point::get_y() const {

	return (this->_y);
}
