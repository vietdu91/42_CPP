/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:58:13 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 16:25:11 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

	public :
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		virtual Cat		&operator=(Cat const &rhs);
		virtual AAnimal	&operator=(AAnimal const &rhs);

		virtual void	makeSound() const;
		Brain			*getBrain() const;

	private :
		Brain	*_brain;
} ;

#endif
