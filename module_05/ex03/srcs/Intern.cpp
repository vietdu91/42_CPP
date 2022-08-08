/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:16:19 by emtran            #+#    #+#             */
/*   Updated: 2022/08/08 13:19:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Intern::Intern() {

	std::cout << GREEN_B << "👶 A cute intern is coming to the job market!" \
	<< RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Intern::Intern(Intern const &src) {

	std::cout << GREEN_B << "👶 An other cute intern is coming to the job market!" \
	<< RESET << std::endl;
	*this = src;
	return ;
}
//	 =======        DESTRUCTOR       =======

Intern::~Intern() {

	std::cout << GREEN_B << "👶 A cute intern is retiring!" \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Intern &Intern::operator=(Intern const &rhs) {

	(void)rhs;
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

AForm	*Intern::_makeShrubberyCreationForm(std::string target) {

	AForm	*form = new ShrubberyCreationForm(target);
	std::cout << BLUE_B << "🗞️ Intern creates ShruberryCreationForm for " << RESET << \
	SKY_B << target << RESET << std::endl;
	return (form);
}

AForm	*Intern::_makeRobotomyRequestForm(std::string target) {

	AForm	*form = new RobotomyRequestForm(target);
	std::cout << BLUE_B << "🗞️ Intern creates RobotomyRequestForm for " << RESET << \
	SKY_B << target << RESET << std::endl;
	return (form);
}

AForm	*Intern::_makePresidentialPardonForm(std::string target) {

	AForm	*form = new PresidentialPardonForm(target);
	std::cout << BLUE_B << "🗞️ Intern creates PresidentialPardonForm for " << RESET << \
	SKY_B << target << RESET << std::endl;
	return (form);
}

char const	*Intern::NoForm::what(void) const throw() {

	return ("🤬 Who trained the useless Intern?!!");
}

AForm	*Intern::makeForm(std::string name, std::string target) {

	std::string	form[3] = {"ShrubberyCreation",
						"RobotomyRequest",
						"PresidentialPardon"};
	AForm	*(Intern::*func[3])(std::string) = {&Intern::_makeShrubberyCreationForm,
											&Intern::_makeRobotomyRequestForm,
											&Intern::_makePresidentialPardonForm};

	try
	{
		for (int i = 0; i < 3; i++)
			if (name == form[i])
				return (this->*func[i])(target);
		throw Intern::NoForm();
	}
	catch(std::exception & e)
	{
		std::cerr << "💩 We couldn't create " << name << " because ";
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
}
