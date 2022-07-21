/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:22:08 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 15:22:50 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public :
		WrongCat();
		WrongCat(WrongCat const &src);
		virtual ~WrongCat();

		WrongCat	&operator=(WrongCat const &rhs);

		virtual void	makeSound() const;
} ;

#endif
