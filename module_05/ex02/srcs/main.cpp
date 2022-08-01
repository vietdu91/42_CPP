/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:34:43 by emtran            #+#    #+#             */
/*   Updated: 2022/08/01 19:15:50 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main(void)
{
	{
		std::cout << "* SHRUBBERY TEST *" << std::endl << std::endl;

		ShrubberyCreationForm	shrub("garden");
		Bureaucrat				gardener("gardener", 138);

		std::cout << shrub << std::endl;

		gardener.execForm(shrub);
		gardener.signForm(shrub);
		gardener.execForm(shrub);
		gardener.promotionCanape();
		gardener.execForm(shrub);
	}
	std::cout << std::endl;
	{
		std::cout << "* ROBOTOMIZE TEST *" << std::endl << std::endl;

		RobotomyRequestForm	robot("robot");
		Bureaucrat			bureau("bureaucrat", 45);

		std::cout << robot << std::endl;

		bureau.signForm(robot);
		bureau.execForm(robot);
	}
	std::cout << std::endl;
	{
		std::cout << "* PRESIDENTIAL TEST *" << std::endl << std::endl;

		PresidentialPardonForm	pardon("pardon");
		Bureaucrat				president("president", 1);

		std::cout << pardon << std::endl;

		president.signForm(pardon);
		president.execForm(pardon);
	}
	return (0);
}
