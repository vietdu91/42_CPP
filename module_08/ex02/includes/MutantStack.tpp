/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:38:11 by emtran            #+#    #+#             */
/*   Updated: 2022/08/26 11:44:52 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

template <typename T>
MutantStack<T>::MutantStack() {

	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) {

	*this = src;
	return ;
}

//	 =======        DESTRUCTOR       =======

template<typename T>
MutantStack<T>::~MutantStack() {

	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

template<typename T>
MutantStack<T> const	&MutantStack<T>::operator=(MutantStack<T> const &rhs) {

	if (this != &rhs)
		this->c = rhs.c;
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

//	 ======================================
//	|	EXCEPTIONS       		           |
//	 ======================================

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

//	 =======      GET FUNCTIONS      =======

//	 =======     OTHERS FUNCTIONS    =======

template<typename T>
typename MutantStack<T>::iterator		MutantStack<T>::begin() {

	return (this->c.begin());
};

template<typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end() {

	return (this->c.end());
};

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const {

	return (this->c.begin());
};

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const {

	return (this->c.end());
};

//	 ======================================
//	|	NON-MEMBERS FUNCTIONS		       |
//	 ======================================
