/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:53:06 by emtran            #+#    #+#             */
/*   Updated: 2022/07/26 19:51:28 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Form::Form() : _name("Certif. of author. to go to toilet during legal working hours"), \
_formSigned(false), _gradeSign(120), _gradeExec(120) {

	std::cout << GREEN_B << "📝 An application for " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been made!" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Form::Form(Form const &src) {

	std::cout << GREEN_B << "📝 An other application for " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been made!" << RESET << std::endl;
	*this = src;
	return ;
}
//	 =======        DESTRUCTOR       =======

Form::~Form() {

	std::cout << RED_B << "🗑️ The " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been torn up!" << RESET << std::endl;
	return ;
}
//	 =======  COPY ASSIGNEMENT OPER. =======

Form	&Form::operator=(Form const &rhs) {

	if (rhs._gradeSign <= 0 || rhs._gradeExec <= 0)
		throw GradeTooHighException();
	else if (rhs._gradeSign >= 150 || rhs._gradeExec >= 150)
		throw GradeTooLowException();
	this->_formSigned = rhs.getStatusForm();
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

Form::Form (std::string const name, unsigned int const gradeSign, unsigned int const gradeExec) : \
_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec) {

	if (this->_gradeSign <= 0 || this->_gradeExec <= 0)
		throw GradeTooHighException();
	else if (this->_gradeSign >= 150 || this->_gradeExec >= 150)
		throw GradeTooLowException();
	std::cout << GREEN_B << "📝 An application for " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been made!" << RESET << std::endl;
	return ;
}
//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

std::ostream	&operator<<(std::ostream &o, Form const &rhs) {

	o << BLUE_B << " 📂 THE CONTENT OF " << RESET << RED_B << rhs.getName() << RESET << std::endl;
	o << SKY_B << "			IS SIGNED ? : " << RESET << RED_B << rhs.getStatusForm() << RESET << std::endl;
	o << SKY_B << "			IT GRADE SIGN ? : " << RESET << RED_B << rhs.getGradeSign() << RESET << std::endl;
	o << SKY_B << "			IT GRADE EXECUTION ? : " << RESET << RED_B << rhs.getGradeExec() << RESET << std::endl;
	return (o);
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

std::string const	Form::getName() const {

	return (this->_name);
}

bool	Form::getStatusForm() const {

	return (this->_formSigned);
}

unsigned int	Form::getGradeSign() const {

	return (this->_gradeSign);
}

unsigned int	Form::getGradeExec() const {

	return (this->_gradeExec);
}

void	Form::beSigned(Bureaucrat const &employe) {

	if (employe.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	this->_formSigned = true;
	return ;
}

const char	*Form::GradeTooHighException::what() const throw() {

	return ("💰 You can't surpass the king of capitalism!");
}

const char	*Form::GradeTooLowException::what() const throw() {

	return ("😈 We really want you to know that we want to keep you in the company!");
}
