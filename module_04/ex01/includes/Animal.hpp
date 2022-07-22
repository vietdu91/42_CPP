/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:55:01 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 16:05:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"
# include "colors.hpp"

class Animal {

	public :
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		virtual Animal	&operator=(Animal const &rhs);

		std::string const		getType() const;
		void					makeSound() const;
		virtual Brain			*getBrain() const = 0;

	protected :
		std::string		_type;
};

#endif
