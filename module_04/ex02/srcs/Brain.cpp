/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:09:02 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 15:30:52 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Brain::Brain() {

	std::cout << PINK_B << "🧠 Brain" << RESET << GREEN_B << " is connected !" \
	<< RESET << std::endl;
	return ;
}
//	 =======    COPY CONSTRUCTOR     =======

Brain::Brain(Brain const &src) {

	*this = src;
	std::cout << GREEN_B << "🧠 An other " << RESET << PINK_B << "Brain" \
	<< RESET << GREEN_B << " is connected !" << RESET << std::endl;
	return ;
}

//	 =======        DESTRUCTOR       =======

Brain::~Brain() {

	std::cout << PINK_B << "🤪 Brain" << RESET << RED_B << " is disconnected" \
	<< RESET << std::endl;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Brain	&Brain::operator=(Brain const &rhs) {

	int	i;

	for (i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================
