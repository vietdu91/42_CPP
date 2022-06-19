/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:37:44 by emtran            #+#    #+#             */
/*   Updated: 2022/06/19 11:37:45 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(int const nb_int);
		Fixed(float const nb_float);
		~Fixed();

		Fixed	&operator=(Fixed const &rhs);

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;

	private:
		static int const 	_bits = 8;
		int					_nb_fixed;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
