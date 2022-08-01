/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:53:06 by emtran            #+#    #+#             */
/*   Updated: 2022/08/01 19:19:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

AForm::AForm() : _name("Certif. of author. to go to toilet during legal working hours"), \
_formSigned(false), _gradeSign(120), _gradeExec(120) {

	std::cout << GREEN_B << "📝 An application for " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been made!" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

AForm::AForm(AForm const &src) {

	std::cout << GREEN_B << "📝 An other application for " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been made!" << RESET << std::endl;
	*this = src;
	return ;
}
//	 =======        DESTRUCTOR       =======

AForm::~AForm() {

	std::cout << RED_B << "🗑️ The " << RESET << YELLOW_B << this->_name \
	<< RESET << GREEN_B << " has been torn up!" << RESET << std::endl;
	return ;
}
//	 =======  COPY ASSIGNEMENT OPER. =======

AForm	&AForm::operator=(AForm const &rhs) {

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

AForm::AForm (std::string const name, unsigned int const gradeSign, unsigned int const gradeExec) : \
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

std::ostream	&operator<<(std::ostream &o, AForm const &rhs) {

	o << BLUE_B << " 📂 THE CONTENT OF " << RESET << RED_B << rhs.getName() << RESET << std::endl;
	o << SKY_B << "			IS SIGNED ? : " << RESET << RED_B << rhs.getStatusForm() << RESET << std::endl;
	o << SKY_B << "			IT GRADE SIGN ? : " << RESET << RED_B << rhs.getGradeSign() << RESET << std::endl;
	o << SKY_B << "			IT GRADE EXECUTION ? : " << RESET << RED_B << rhs.getGradeExec() << RESET << std::endl;
	return (o);
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

std::string const	AForm::getName() const {

	return (this->_name);
}

bool	AForm::getStatusForm() const {

	return (this->_formSigned);
}

unsigned int	AForm::getGradeSign() const {

	return (this->_gradeSign);
}

unsigned int	AForm::getGradeExec() const {

	return (this->_gradeExec);
}

void	AForm::beSigned(Bureaucrat const &employe) {

	if (employe.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	this->_formSigned = true;
	return ;
}

void	AForm::beExecuted(Bureaucrat const &executor) {

	if (this->_formSigned == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
	this->execute();
	return ;
}

const char	*AForm::GradeTooHighException::what() const throw() {

	return ("💰 You can't surpass the king of capitalism!");
}

const char	*AForm::GradeTooLowException::what() const throw() {

	return ("😈 We really want you to know that we want to keep you in the company!");
}

const char	*AForm::FormNotSignedException::what() const throw() {

	return ("🪧 What? A Form not signed? Go to work you lazy bastard 🏃!");
}
