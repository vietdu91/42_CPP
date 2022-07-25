/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:27:59 by emtran            #+#    #+#             */
/*   Updated: 2022/07/25 16:12:59 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main() {

	std::cout << "\033[1;32m==========       CONSTRUCTOR       ==========\e[0m" << std::endl << std::endl;

	Bureaucrat	corenting("Corentin", 149);
	Bureaucrat	fabieng;
	Bureaucrat	robin("Robin", 2);
	Bureaucrat	boss("THE BOSS", 1);

	std::cout << std::endl;
	std::cout << "\033[1;33m--------------------------------------------\e[0m" << std::endl << std::endl;

	std::cout << boss << std::endl;
	std::cout << robin << std::endl;
	std::cout << fabieng << std::endl;
	std::cout << corenting << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;36m==========  LA PROMOTION DE ROBIN  ==========\e[0m" << std::endl << std::endl;

	std::cout << robin << std::endl;
	robin.promotionCanape();
	std::cout << robin << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;37m==========  CORENTING AU PLACARD!  ==========\e[0m" << std::endl << std::endl;

	std::cout << corenting << std::endl;
	corenting.declassementSocial();
	std::cout << corenting << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;35m==========   AU BUREAU DE LA RH    ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ ROBIN TRIES TO BECOME GOD ____" << RESET << std::endl << std::endl;
	try
	{
		robin.promotionCanape();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << YELLOW_B << "____ CORENTING TRIES TO BE FIRED ____" << RESET << std::endl << std::endl;
	try
	{
		corenting.declassementSocial();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << YELLOW_B << "____ JEAN-EUDES TRIES TO BECOME GOD ____" << RESET << std::endl << std::endl;
	try
	{
		Bureaucrat	jean_eudes("Jean-Eudes", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << YELLOW_B << "____ BRANDON TRIES TO BE FIRED ____" << RESET << std::endl << std::endl;
	try
	{
		Bureaucrat	brandon("Brandon", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1;31m==========      DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;

	return (0);
}
