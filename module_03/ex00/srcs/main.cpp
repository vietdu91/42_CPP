/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:13:56 by emtran            #+#    #+#             */
/*   Updated: 2022/06/21 15:00:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	man("Louis");
	ClapTrap	guy(man);

	std::cout << std::endl;

	man.attack("another guy");
	man.takeDamage(100);
	man.attack("");
	man.takeDamage(100);

	std::cout << std::endl;

	guy.takeDamage(9);
	guy.beRepaired(UINT_MAX);
	for (int i = 10; i; i--)
		guy.attack("nobody");

	std::cout << std::endl;

	return (0);
}
