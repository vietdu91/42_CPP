/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:34:43 by emtran            #+#    #+#             */
/*   Updated: 2022/08/09 14:14:11 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main(void)
{
	{
		std::cout << "\033[1;35m==========    SHRUBBERY TEST    ==========\e[0m" << std::endl << std::endl;

		ShrubberyCreationForm	shrub("Form to ask to destroy les mauvaises herbes");
		Bureaucrat				billy("Billy le jardinier", 138);

		std::cout << shrub << std::endl;

		billy.execForm(shrub);
		billy.signForm(shrub);
		billy.execForm(shrub);
		billy.promotionCanape();
		billy.execForm(shrub);

		std::cout << std::endl << "\033[1;31m==========      DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1;36m==========    ROBOTOMIZE TEST    ==========\e[0m" << std::endl << std::endl;

		RobotomyRequestForm	robot("Form to ask to be married with the copy machine");
		Bureaucrat			steve("Steeve du placard a balai", 45);

		std::cout << robot << std::endl;

		steve.signForm(robot);
		steve.execForm(robot);

		std::cout << std::endl << "\033[1;31m==========      DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "\033[1;32m==========   PRESIDENTIAL TEST   ==========\e[0m" << std::endl << std::endl;

		PresidentialPardonForm	pardon("Form to ask DEMISSION to Emmanuel Macron");
		Bureaucrat				serge("Philippe Poutou", 1);

		std::cout << pardon << std::endl;

		serge.signForm(pardon);
		serge.execForm(pardon);

		std::cout << std::endl << "\033[1;31m==========      DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	}
	return (0);
}
