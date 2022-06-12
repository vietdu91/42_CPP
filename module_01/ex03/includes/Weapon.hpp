/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:05:38 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 16:01:08 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

	public:
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType();
		void				setType(std::string type);

	private:
		std::string _type;
};

#endif
