/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:46:46 by emtran            #+#    #+#             */
/*   Updated: 2022/08/18 16:05:42 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <exception>
# include "colors.hpp"

template<typename T>
class Array {

	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(Array const &src);
		virtual	~Array<T>();

		Array<T> const	&operator=(Array<T> const &rhs);

		T	&operator[](size_t i);

		T const	*getArray() const;
		size_t	getSize() const;

		class BadIndex: public std::exception {

			public:
				virtual const char *what() const throw();
		};

	private:
		T		*_array;
		size_t	_size;
};

template<typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &rhs);

template<typename T>
void	InverseArray(Array<T> *array);

template<typename T>
void	TryCatchArray(std::string element, Array<T> array, size_t i);

template<typename T>
void	TryAssignation(Array<T> *array, size_t i, T value);

# include "Array.tpp"

#endif
