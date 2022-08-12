/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:27:31 by emtran            #+#    #+#             */
/*   Updated: 2022/08/09 14:12:41 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), _target(target) {

	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {

	return ;
}

//	 =======        DESTRUCTOR       =======

RobotomyRequestForm::~RobotomyRequestForm() {

	return ;
}
//	 =======  COPY ASSIGNEMENT OPER. =======

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {

	AForm::operator=(rhs);
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

char const	*RobotomyRequestForm::FailRobotomy::what(void) const throw() {

	return ("failed to robotomize");
}

void	RobotomyRequestForm::execute() const {

	std::srand(time(NULL));
	std::cout << "\033[5;97m*drill noises* LOADING...\e[0m" << std::endl;
	if ((std::rand() % 2) == 0)
		throw RobotomyRequestForm::FailRobotomy();
	std::cout << YELLOW_B << this->_target << RESET << " was robotomized" << std::endl;
}
