/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:55:01 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 16:04:11 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include "Brain.hpp"
# include "colors.hpp"

class AAnimal {

	public :
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal() = 0;

		virtual AAnimal	&operator=(AAnimal const &rhs) = 0;

		std::string const		getType() const;
		virtual void			makeSound() const = 0;
		virtual Brain			*getBrain() const = 0;

	protected :
		std::string		_type;
};

#endif
