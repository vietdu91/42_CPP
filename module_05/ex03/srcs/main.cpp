/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:34:43 by emtran            #+#    #+#             */
/*   Updated: 2022/08/09 14:35:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void	intern_in_action(Intern &intern, Bureaucrat &bureaucrat, AForm *newForm, \
std::string name, std::string target) {

	newForm = intern.makeForm("Form to piss off the world", target);
	newForm = intern.makeForm(name, target);
	std::cout << *newForm << std::endl;
	bureaucrat.execForm(*newForm);
	bureaucrat.signForm(*newForm);
	bureaucrat.execForm(*newForm);

	std::cout << std::endl << "\033[1;31m==========      DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;

	delete newForm;
}

int	main(void) {

	std::cout  << std::endl << "\033[1;32m==========      CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;

	Intern		Corenting;

	std::cout << std::endl;
	std::cout << "\033[1;35m==========    SHRUBBERY TEST    ==========\e[0m" << std::endl << std::endl;

	Bureaucrat	gerard("Gerard de la compta", 5);
	AForm		*testShrubbery = NULL;

	intern_in_action(Corenting, gerard, testShrubbery, "ShrubberyCreation", "Form to ask to eat Chamonix during worktime");

	std::cout << std::endl;
	std::cout << "\033[1;36m==========    ROBOTOMIZE TEST    ==========\e[0m" << std::endl << std::endl;

	Bureaucrat	kelly("Kelly du marketing", 5);
	AForm		*testRobotomy = NULL;
	intern_in_action(Corenting, kelly, testRobotomy, "RobotomyRequest", "Form to ask if the boss is single or not");

	std::cout << std::endl;
	std::cout << "\033[1;32m==========   PRESIDENTIAL TEST   ==========\e[0m" << std::endl << std::endl;

	Bureaucrat	ganesh("Ganesh du pole info", 5);
	AForm		*testPresidential = NULL;
	intern_in_action(Corenting, ganesh, testPresidential, "PresidentialPardon", "Form to ask to change Windows 95 in the company");

	return (0);
}
