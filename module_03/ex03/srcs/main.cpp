/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:13:56 by emtran            #+#    #+#             */
/*   Updated: 2022/07/19 17:31:30 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main() {

	std::cout << "\033[1;32m==========       CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;

	DiamondTrap	diamant("Diam's");

	std::cout << std::endl;

	std::cout << "\033[1;36m==========   DIAMANT IN ACTION !  ==========\e[0m" << std::endl << std::endl;

	std::cout << std::endl;
	diamant.guardGate();
	diamant.highFivesGuys();
	diamant.whoAmI();
	std::cout << std::endl;
	diamant.takeDamage(14);
	diamant.beRepaired(15);
	diamant.attack("Nicolas Sarkozy");
	std::cout << std::endl;

	std::cout << "\033[1;31m==========       DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	return (0);
}
