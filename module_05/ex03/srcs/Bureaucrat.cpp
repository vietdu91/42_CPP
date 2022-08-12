/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:13:41 by Manu              #+#    #+#             */
/*   Updated: 2022/08/09 14:11:41 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Bureaucrat::Bureaucrat() : _name("Fabieng"), _grade(100) {

	std::cout << PINK_B << "💼 " << this->_name << RESET << GREEN_B << " is coming to the job market!" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Bureaucrat::Bureaucrat(Bureaucrat const &src) {

	std::cout << PINK_B << "💼 An other " << this->_name << RESET << GREEN_B << " is coming to the job market!" \
	<< RESET << std::endl;
	*this = src;
	return ;
}
//	 =======        DESTRUCTOR       =======

Bureaucrat::~Bureaucrat() {

	std::cout << PINK_B << "💼 " << this->_name << RESET << GREEN_B << " is retiring!" \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs) {

	if (rhs._grade <= 0)
		throw GradeTooHighException();
	else if (rhs._grade >= 150)
		throw GradeTooLowException();
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
	std::cout << PINK_B << "💼 " << this->_name << RESET << GREEN_B << " is coming to the job market!" \
	<< RESET << std::endl;
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs) {

	o << RED_B << " 🖥️  " << rhs.getName() << RESET << BLUE_B << ", bureaucrat grade " << RESET \
	<< PINK_B << rhs.getGrade() << RESET;
	return (o);
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

std::string const	Bureaucrat::getName() const {

	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const {

	return (this->_grade);
}

void	Bureaucrat::promotionCanape()
{
	if (this->_grade - 1 <= 0)
		throw GradeTooHighException();
	this->_grade -= 1;
	std::cout << RED_B << " 👅 " << this->_name << RESET << YELLOW_B << " sucked well the boss! His/her grade now is : " \
	<< RESET << PINK_B << this->_grade << RESET << std::endl;
	return ;
}

void	Bureaucrat::declassementSocial()
{
	if (this->_grade + 1 >= 151)
		throw GradeTooLowException();
	this->_grade += 1;
	std::cout << RED_B << " 🙇 " << this->_name << RESET << RED_B << " has made a serious mistake that jeopardizes the cohesion of the company! His/her grade now is : " \
	<< RESET << PINK_B << this->_grade << RESET << std::endl;
	return ;
}

void	Bureaucrat::signForm(AForm &form) const {

	try
	{
		form.beSigned(*this);
		std::cout << " 🖋️  " << RED_B <<  this->getName() << RESET << " signed " << YELLOW_B <<  form.getName() << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << " ⛔ " << RED_B << this->getName() << RESET " couldn't sign ";
		std::cerr << YELLOW_B << form.getName() << RESET << " because ";
		std::cerr << e.what() << std::endl;
	}
	return ;

}

void	Bureaucrat::execForm(AForm &form) const {

	try
	{
		form.beExecuted(*this);
		std::cout << RED_B << this->getName() << RESET << " executed " << YELLOW_B << form.getName() << RESET << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << RED_B << this->getName() << RESET << " couldn't execute ";
		std::cerr << YELLOW_B << form.getName() << RESET << " because ";
		std::cerr << e.what() << std::endl;
	}
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {

	return ("\033[0;36m💰 You can't surpass the king of capitalism!\e[0m");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {

	return ("\033[0;35m😈 We really want you to know that we want to keep you in the company!\e[0m");
}
