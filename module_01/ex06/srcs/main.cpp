/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:36:28 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 15:43:50 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	error(std::string const message) {

	std::cerr << "\033[5;31mError ! \e[0m" << message << std::endl;
	exit(1);
}

int	main(int argc, char **argv) {

	Harl	harl;

	if (argc != 2)
		error("\033[1;34mFail arguments 😶... Well tried!\e[0m");
	harl.complain(argv[1]);
	return (0);
}
