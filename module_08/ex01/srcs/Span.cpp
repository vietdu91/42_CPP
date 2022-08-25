/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:33:09 by emtran            #+#    #+#             */
/*   Updated: 2022/08/25 14:22:18 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

Span::Span() : _N(0) {

	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

Span::Span(Span const &src) {

	this->_Vector.assign(src._Vector.begin(), src._Vector.end());
	return ;
}

//	 =======        DESTRUCTOR       =======

Span::~Span() {

	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

Span	&Span::operator=(Span const &rhs) {

	if (this != &rhs)
	{
		this->_N = rhs.getN();
		this->_Vector.clear();
		this->_Vector.assign(rhs._Vector.begin(), rhs._Vector.end());
	}
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

Span::Span(unsigned int N) : _N(N) {

	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

std::ostream &operator<<(std::ostream &o, Span &rhs) {

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	end;

	end = rhs.getVector().end();
	o << "[ ";
	for (it = rhs.getVector().begin(); it != end; it++)
	{
		o << *it;
		if (it + 1 != end)
			o << ", ";
	}
	o << " ]";
	return (o);
}

//	 ======================================
//	|	EXCEPTIONS       		           |
//	 ======================================

const char	*Span::NoSpaceInVector::what() const throw() {

	return ("\033[1;31mThere is not enough room to accommodate the world's misery 🏚️ ...\e[0m");
}

const char	*Span::NoSpan::what() const throw() {

	return ("\033[1;31mThere is no border if there is no land. 🪧");
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

//	 =======      GET FUNCTIONS      =======

unsigned int	Span::getN() const {

	return (this->_N);
}

std::vector<int> &Span::getVector() {

	return (this->_Vector);
}

//	 =======     OTHERS FUNCTIONS    =======

void	Span::addNumber(int nb) {

	if (this->_Vector.size() < this->getN())
		this->_Vector.push_back(nb);
	else
		throw(Span::NoSpaceInVector());
	return ;
}

void	Span::addALotOfNumbers(std::vector<int>::iterator begin, \
std::vector<int>::iterator end) {

	int count = 0;

	count = std::distance(begin, end);
	if (this->_Vector.size() + count >= this->getN())
		throw(Span::NoSpaceInVector());

	std::vector<int>::iterator it;
	for (it = begin; it != end; it++)
		addNumber(*it);
	return ;
}

int	Span::shortestSpan() const {

	int	short_distance = 0;
	int	tmp_distance = 0;

	if (this->_Vector.size() < 2)
		throw(Span::NoSpan());

	std::vector<int> GoSorted = this->_Vector;
	std::sort(GoSorted.begin(), GoSorted.end());

	std::vector<int>::const_iterator begin = GoSorted.begin();
	std::vector<int>::const_iterator end = GoSorted.end();
	std::vector<int>::const_iterator it;

	short_distance = *(begin + 1) - *begin;
	for (it = begin; it + 1 != end; it++)
	{
		tmp_distance = *(it + 1) - *it;
		if (tmp_distance < short_distance)
			short_distance = tmp_distance;
	}

	return(short_distance);
}

int	Span::longestSpan() const {

	int long_distance = 0;
	int	max = 0;
	int min = 0;

	if (this->_Vector.size() < 2)
		throw(Span::NoSpan());

	max = *max_element(this->_Vector.begin(), this->_Vector.end());
	min = *min_element(this->_Vector.begin(), this->_Vector.end());
	long_distance = max - min;

	return (long_distance);
}

//	 ======================================
//	|	NON-MEMBERS FUNCTIONS		       |
//	 ======================================
