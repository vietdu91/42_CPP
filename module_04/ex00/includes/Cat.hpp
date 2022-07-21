/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:58:13 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 13:13:49 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {

	public :
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat	&operator=(Cat const &rhs);

		virtual void	makeSound() const;
} ;

#endif
