/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:21:13 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 15:21:56 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include "colors.hpp"

class WrongAnimal {

	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal();

		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string const		getType() const;
		virtual void			makeSound() const;

	protected :
		std::string		_type;
};

#endif
