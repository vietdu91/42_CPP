/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 11:03:43 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:19:38 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

	public:
		Zombie(std::string _name);
		~Zombie();

		void	announce() const;

	private:
		std::string _name;
};

Zombie*	newZombie(std::string _name);
void	randomChump(std::string _name);

#endif
