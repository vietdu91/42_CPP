/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:13:20 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 16:24:37 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <climits>
# include <cstdlib>
# include <exception>
# include "colors.hpp"

typedef enum e_info
{
	DISPLAYABLE,
	NOT_DISPLAYABLE,
	IMPOSSIBLE,
} t_info;

class Conversion {

	public:
		Conversion(char const *str);
		Conversion(const Conversion &src);
		~Conversion();

		Conversion &operator=(Conversion const &rhs);

		char	getCharVal() const;
		int		getIntVal() const;
		float	getFloatVal() const;
		double	getDoubleVal() const;
		int		getCharDisp() const;
		int		getIntDisp() const;

		bool	convertChar(char const *str);
		bool	convertInt(char const *str);
		bool	convertFloat(char const *str);
		bool	convertDouble(char const *str);

		void	timeToConvert(char const *str);
		void	checkNoProblem();

		void	display() const;

	private:
		char	_charVal;
		int		_intVal;
		float	_floatVal;
		double	_doubleVal;
		int		_charDisp;
		int		_intDisp;

};

#endif
