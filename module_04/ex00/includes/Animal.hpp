/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:55:01 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 17:04:40 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "colors.hpp"

class Animal {

	public :
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		Animal	&operator=(Animal const &rhs);

		std::string const		getType() const;
		virtual void			makeSound() const;

	protected :
		std::string		_type;
};

#endif
