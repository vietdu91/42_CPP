/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:22:58 by emtran            #+#    #+#             */
/*   Updated: 2022/08/25 12:07:03 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <cstdlib>
# include <exception>
# include <vector>
# include <algorithm>
# include "colors.hpp"

class Span {

	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span	&operator=(Span const &rhs);

		unsigned int		getN() const;
		std::vector<int>	&getVector();

		void	addNumber(int nb);
		void	addALotOfNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan() const;
		int		longestSpan() const;

		class	NoSpaceInVector: public std::exception {

			public:
				virtual const char *what() const throw();
		};

		class	NoSpan: public std::exception {

			public:
				virtual const char *what() const throw();
		};

	private:
		unsigned int		_N;
		std::vector<int>	_Vector;
};

std::ostream &operator<<(std::ostream &o, Span &rhs);

#endif
