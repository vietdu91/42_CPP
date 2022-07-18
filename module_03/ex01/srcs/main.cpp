/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:13:56 by emtran            #+#    #+#             */
/*   Updated: 2022/06/23 14:35:31 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main() {

	std::cout << "\033[1;32m==========       CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;

	ScavTrap	scav("Super Vietdu91");

	std::cout << std::endl;

	std::cout << "\033[1;34m==========       ACTION !!!       ==========\e[0m" << std::endl << std::endl;

	scav.attack("Richard Nixon");
	scav.takeDamage(99);
	scav.beRepaired(150);
	std::cout << std::endl;
	scav.guardGate();
	std::cout << std::endl;
	scav.takeDamage(789);
	scav.beRepaired(150);
	std::cout << std::endl;

	std::cout << "\033[1;31m==========       DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	return (0);
}
