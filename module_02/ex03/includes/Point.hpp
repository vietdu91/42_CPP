/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:28:46 by emtran            #+#    #+#             */
/*   Updated: 2022/06/20 08:52:30 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	public:
		Point();
		Point(float const x, float const y);
		Point(Point const &src);
		~Point();

		Point	&operator=(Point const &rhs);

		Fixed	get_x() const;
		Fixed	get_y() const;

	private:
		Fixed const _x;
		Fixed const _y;
};

std::ostream	&operator<<(std::ostream &o, Point const &rhs);
bool			bsp(Point a, Point b, Point c, Point const point);

#endif

