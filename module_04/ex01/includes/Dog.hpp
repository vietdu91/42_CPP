/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:58:16 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 15:41:56 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

	public :
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog	&operator=(Dog const &rhs);
		
		virtual Animal	&operator=(Animal const &rhs);
		virtual void	makeSound() const;
		Brain			*getBrain() const;

	private :
		Brain	*_brain;
} ;

#endif
