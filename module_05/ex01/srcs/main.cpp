/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:27:59 by emtran            #+#    #+#             */
/*   Updated: 2022/08/08 14:14:36 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "\033[1;35m==========    RECLAMATION BOX    ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ CORENTING ASK HOLIDAYS ____" << RESET << std::endl << std::endl;

	try
	{
		Form("Form to ask holidays", 0, 150);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << YELLOW_B << "____ CORENTING ASK DREAMS FOR BORING TIME ____" << RESET << std::endl << std::endl;

	try
	{
		Form("Form to ask dreams for boring time", 150, 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << YELLOW_B << "____ CORENTING ASK TO GO IN TOILETS ____" << RESET << std::endl << std::endl;

	try
	{
		Form("Form to ask to go in toilets", 151, 150);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << YELLOW_B << "____ CORENTING ASK A CHAIR FOR CODING ____" << RESET << std::endl << std::endl;

	try
	{
		Form("Form to ask a chair for coding", 150, 151);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout  << std::endl << "\033[1;32m==========      CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;

	Bureaucrat	corenting("Corenting", 1);
	Form		form("Form to ask suicide in workplace", 1, 12);

	std::cout  << std::endl << "\033[1;36m==========   IN FRANCE TELECOM   ==========\e[0m" << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << form << std::endl;

	corenting.declassementSocial();
	std::cout << corenting << std::endl;
	corenting.signForm(form);

	std::cout << std::endl;

	corenting.promotionCanape();
	std::cout << corenting << std::endl;
	corenting.signForm(form);

	std::cout << std::endl;
	std::cout << form << std::endl;

	std::cout << "\033[1;31m==========      DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;

	return (0);
}
