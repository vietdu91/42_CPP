/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:24:32 by emtran            #+#    #+#             */
/*   Updated: 2022/08/26 11:43:29 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <cstdlib>
# include <exception>
# include <vector>
# include <stack>
# include <list>
# include <iterator>
# include <algorithm>
# include "colors.hpp"

template <typename T>
class MutantStack : public std::stack<T> {

	public:
		MutantStack();
		MutantStack(MutantStack const &src);
		~MutantStack();

		MutantStack const	&operator=(MutantStack const &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin();
		iterator  	end();

		const_iterator	begin() const;
		const_iterator	end()	const;
};

# include "MutantStack.tpp"

#endif
