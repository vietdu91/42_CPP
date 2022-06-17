/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:47:26 by emtran            #+#    #+#             */
/*   Updated: 2022/06/17 16:36:11 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();

		Fixed& operator=(Fixed const &rhs);

		int 	getRawBits() const;
		void	setRawBits(int const raw);

	private:
		static const int	_bits = 8;
		int					_nb_fixed;
};

#endif
