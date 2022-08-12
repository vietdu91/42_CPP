/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:20:22 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 17:36:23 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/VeritableType.hpp"

void	VeritableType() {

	Base	*test = generate();
	Base	&testRef = *test;

	identify(test);
	identify(testRef);

	std::cout << std::endl;
	
	delete test;

	std::cout << std::endl << std::endl << SKY_B << "This deserves a round of applause! 👏👏👏 CLAP CLAP CLAP" << RESET << std::endl;
}

int	main() {

	std::cout << std::endl << YELLOW_B << "A, B OR C ?! THAT'S THE QUESTION 🪄" << RESET << std::endl << std::endl;

	VeritableType();
	return (0);
}
