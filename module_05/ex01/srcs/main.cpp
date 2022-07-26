/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:27:59 by emtran            #+#    #+#             */
/*   Updated: 2022/07/26 20:00:35 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form("WPE", 0, 150);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form("WPE", 150, 0);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form("WPE", 151, 150);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form("WPE", 150, 151);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat	walter("Walter", 1);
	Form		form("FSP", 1, 12);

	std::cout << std::endl;
	std::cout << form << std::endl;

	walter.declassementSocial();
	std::cout << walter << std::endl;
	walter.signForm(form);
	walter.promotionCanape();
	std::cout << walter << std::endl;
	walter.signForm(form);

	std::cout << std::endl;
	std::cout << form << std::endl;

	return (0);
}
