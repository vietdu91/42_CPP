/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:05:43 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 15:53:25 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string type, Weapon &weapon);
		~HumanA();

		void	attack();

	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif
