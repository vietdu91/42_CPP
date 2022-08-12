/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:37:23 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 16:27:58 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cerr << "⛔⛔⛔" << std::endl;
		std::cerr << RED_B << "There's an argument missing, you little bastard! I hate correctors like you! 🤬🤬🤬" << RESET << std::endl;
		return (1);
	}

	Conversion	conversion(argv[1]);
	conversion.display();
	return (0);
}
