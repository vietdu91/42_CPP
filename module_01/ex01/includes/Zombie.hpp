/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:00:37 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:18:24 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie();
		~Zombie();

		void	announce() const;
		void	named(std::string name);

	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
