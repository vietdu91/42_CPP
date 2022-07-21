/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:58:16 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 17:04:50 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {

	public :
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog	&operator=(Dog const &rhs);

		virtual void	makeSound() const;
} ;

#endif
