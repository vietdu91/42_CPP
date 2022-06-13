/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 14:39:28 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 15:21:19 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {

	Harl		harl;
	std::string	input;

	std::cout << std::endl << "\033[1;31m==========        DEBUG        ==========\e[0m" << std::endl ;
	std::cout << std::endl << "\033[1;32m==========        INFO         ==========\e[0m" << std::endl ;
	std::cout << std::endl << "\033[1;33m==========       WARNING       ==========\e[0m" << std::endl ;
	std::cout << std::endl << "\033[1;34m==========        ERROR        ==========\e[0m" << std::endl << std::endl;
	std::cout << "\033[0;35mYou have the choice ... : \e[0m";
	std::cin >> input;
	harl.complain(input);
	return (0);
}
