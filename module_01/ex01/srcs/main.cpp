/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:04:26 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:53:44 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

	std::cout << std::endl << "\033[1;31m==========        HORDE OF 5 ZOMBIES        ==========\e[0m" << std::endl << std::endl;
	Zombie* horde = zombieHorde(5, "Caramel");
	delete [] horde;
	std::cout << std::endl << "\033[1;32m==========        HORDE OF 0 ZOMBIES        ==========\e[0m" << std::endl << std::endl;
	Zombie* horde2 = zombieHorde(0, "Chipie");
	delete [] horde2;
	std::cout << std::endl << "\033[1;33m==========        HORDE OF 42 ZOMBIES       ==========\e[0m" << std::endl << std::endl;
	Zombie* horde3 = zombieHorde(42, "Gribouille");
	delete [] horde3;
	return (0);
}
