/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:20:22 by emtran            #+#    #+#             */
/*   Updated: 2022/06/19 18:23:44 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	scalar(Point a, Point b, Point c)
{
	return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - \
			(b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool	bsp(Point a, Point b, Point c, Point point)
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
