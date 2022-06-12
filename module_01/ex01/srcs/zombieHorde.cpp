/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:03:30 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 13:55:27 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {

	Zombie	*horde = new Zombie[N];

	int	i;
	for (i = 0; i < N; i++)
	{
		horde[i].named(name);
		horde[i].announce();
	}
	return (horde);
}
