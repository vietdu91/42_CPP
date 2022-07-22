/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:58:16 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 16:25:12 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

	public :
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog	&operator=(Dog const &rhs);

		virtual AAnimal	&operator=(AAnimal const &rhs);
		virtual void	makeSound() const;
		Brain			*getBrain() const;

	private :
		Brain	*_brain;
} ;

#endif
