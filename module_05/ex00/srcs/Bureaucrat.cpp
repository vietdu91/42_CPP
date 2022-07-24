/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manu <Manu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:13:41 by Manu              #+#    #+#             */
/*   Updated: 2022/07/24 23:24:04 by Manu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Bureaucrat::Bureaucrat() : _name("Fabieng"), _grade(10) {

	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Bureaucrat::Bureaucrat(Bureaucrat const &src) {

	*this = src;
	return ;
}
//	 =======        DESTRUCTOR       =======

Bureaucrat::~Bureaucrat() {
	
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {

	if (rhs._grade <= 0)
		throw GradeTooHighException();	
	else if (rhs._grade >= 150)
		throw GradeTooLowException();
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}
//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name), _grade(grade) {

	if (this->_grade <= 0)
		throw GradeTooHighException();	
	else if (this->_grade >= 150)
		throw GradeTooLowException();
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}
//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

void	Bureaucrat::promotionCanape()
{
	if (this->_grade <= 0)
		throw GradeTooHighException();
	this->_grade -= 1;
	return ;
}

void	Bureaucrat::declassementSocial()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade += 1;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Putain t'es trop gradé !");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Putain t'es trop peu gradé !");
} 