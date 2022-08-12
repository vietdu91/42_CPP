/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VeritableType.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:15:05 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 17:28:41 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VERITABLE_HPP
# define VERITABLE_HPP

# include <string>
# include <cstdlib>
# include <iostream>
# include "colors.hpp"

class	Base
{
	public:
		virtual ~Base();
};

class	A: public Base {};

class	B: public Base {};

class	C: public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
