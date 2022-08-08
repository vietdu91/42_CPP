/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:34:43 by emtran            #+#    #+#             */
/*   Updated: 2022/08/08 13:35:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

void	intern_in_action(Intern &intern, Bureaucrat &bureaucrat, AForm *newForm, \
std::string name, std::string target) {

	newForm = intern.makeForm("Cerfa 219-RC", target);
	newForm = intern.makeForm(name, target);
	std::cout << *newForm << std::endl;
	bureaucrat.execForm(*newForm);
	bureaucrat.signForm(*newForm);
	bureaucrat.execForm(*newForm);
	delete newForm;
}

int	main(void) {

	Intern		Corenting;
	Bureaucrat	bureaucrat("Gerard de la compta", 5);

	// TEST ROBOTOMY REQUEST
	std::cout << std::endl << YELLOW_B << " Test creation RobotomyRequestForm " << RESET << std::endl;
	AForm	*testRobotomy = NULL;
	intern_in_action(Corenting, bureaucrat, testRobotomy, "RobotomyRequest", "Kelly du marketing");

	// TEST SHRUBBERY CREATION
	std::cout << std::endl << GREEN_B << " Test creation ShrubberyCreationtForm " << RESET << std::endl;
	AForm	*testShrubbery = NULL;
	intern_in_action(Corenting, bureaucrat, testShrubbery, "ShrubberyCreation", "Vero de l'accueil");

	// TEST PRESIDENTIAL PARDON
	std::cout << std::endl << BLUE_B << " Test creation PresidentialPardonForm " << RESET << std::endl;
	AForm	*testPresidential = NULL;
	intern_in_action(Corenting, bureaucrat, testPresidential, "PresidentialPardon", "Ganesh du pole info");

	std::cout << std::endl;

	return (0);
}
