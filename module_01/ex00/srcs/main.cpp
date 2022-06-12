/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:05:34 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:54:57 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {

	std::cout << "\033[1;31m==========       CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;
	Zombie	zombie_stack("Stackouille");
	Zombie*	zombie_heap = newZombie("Heapouille");
	std::cout << std::endl;

	std::cout << "\033[1;32m==========        ANNOUNCE        ==========\e[0m" << std::endl << std::endl;
	zombie_stack.announce();
	zombie_heap->announce();
	std::cout << std::endl;

	std::cout << "\033[1;33m==========   AWAKENING OF CHUMP   ==========\e[0m" << std::endl << std::endl;
	randomChump("Chumpouille");
	std::cout << std::endl;

	std::cout << "\033[1;34m==========       DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;
	delete zombie_heap;
	return (0);
}
