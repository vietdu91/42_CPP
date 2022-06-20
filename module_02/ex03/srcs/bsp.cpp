/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:20:22 by emtran            #+#    #+#             */
/*   Updated: 2022/06/20 08:41:07 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	scalar(Point a, Point b, Point c)
{
	return ((a.get_x() - c.get_x()) * (b.get_y() - c.get_y()) - \
			(b.get_x() - c.get_x()) * (a.get_y() - c.get_y()));
}

bool	bsp(Point a, Point b, Point c, Point const point)
{
	Fixed	d1;
	Fixed	d2;
	Fixed	d3;
	bool	neg;
	bool	pos;

	d1 = scalar(point, a, b);
	d2 = scalar(point, b, c);
	d3 = scalar(point, c, a);

	neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
	pos = (d1 > 0) && (d2 > 0) && (d3 > 0);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	return (neg || pos);
}
