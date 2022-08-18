/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:04:59 by emtran            #+#    #+#             */
/*   Updated: 2022/08/18 16:32:05 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

//	 ======================================
//	|	CANONICAL FORM				       |
//	 ======================================

//	 =======   DEFAULT CONSTRUCTOR   =======

template<typename T>
Array<T>::Array() : _size(0) {

	this->_array = NULL;
	std::cout << GREY_B << "An empty Array is created, but it is empty ! It's crying 😢" << RESET << std::endl;
	return ;
}

//	 =======    COPY CONSTRUCTOR     =======

template<typename T>
Array<T>::Array(Array<T> const &src) : _size(src.getSize()) {

	std::cout << SKY_B << "An other Array is created, and it's of size : " << RESET << GREY_B << src.getSize() << RESET \
	<< SKY_B << " ! It's happy 😄" << RESET << std::endl;
	this->_array = new T[src.getSize()];
	for (size_t i = 0; i < src.getSize(); i++)
		this->_array[i] = src._array[i];
	return ;
}

//	 =======        DESTRUCTOR       =======

template<typename T>
Array<T>::~Array() {

	std::cout << GREY_B << "The Array has become a useless object! Shitty consumer society! 🚮" << RESET << std::endl;
	if (this->_array)
		delete [] this->_array;
	return ;
}

//	 =======  COPY ASSIGNEMENT OPER. =======

template<typename T>
Array<T> const	&Array<T>::operator=(Array<T> const &rhs) {

	if (this != &rhs)
	{
		if (this->_array)
			delete [] this->_array;
		this->_size = rhs.getSize();
		this->_array = new T[rhs.getSize()];
		for (size_t i = 0; i < this->getSize(); i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}

//	 ======================================
//	|	CONSTRUCTOR OVERLOAD	           |
//	 ======================================

template<typename T>
Array<T>::Array(unsigned int n) : _size(n) {

	std::cout << SKY_B << "An Array is created, and it's of size : " << RESET << GREY_B << n << RESET \
	<< SKY_B << " ! It's happy 😄" << RESET << std::endl;
	this->_array = new T[n];
	for (size_t i = 0; i < n; i++)
		this->_array[i] = 0;
	return ;
}

//	 ======================================
//	|	OPERATOR OVERLOAD	               |
//	 ======================================

template<typename T>
T	&Array<T>::operator[](size_t i) {

	if (i < this->getSize())
		return (this->_array[i]);
	throw(Array::BadIndex());
}

template<typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> const &rhs) {

	o << "[ ";
	for (size_t i = 0; i < rhs.getSize(); i++)
	{
		o << rhs.getArray()[i];
		if (i < rhs.getSize() - 1)
			o << ", ";
	}
	o << " ]";
	return (o);
}

//	 ======================================
//	|	EXCEPTIONS       		           |
//	 ======================================

template<typename T>
const char *Array<T>::BadIndex::what() const throw()
{
	return ("\033[1;31mIt's a bad index of the hand 🖕\e[0m");
}

//	 ======================================
//	|	MEMBERS FUNCTIONS		           |
//	 ======================================

template<typename T>
T const	*Array<T>::getArray() const {

	return (this->_array);
}

template<typename T>
size_t	Array<T>::getSize() const {

	return (this->_size);
}

//	 ======================================
//	|	NON-MEMBERS FUNCTIONS		       |
//	 ======================================

template<typename T>
void	InverseArray(Array<T> *array) {

	T		tmp;
	size_t	i;
	size_t	j;

	for (i = 0, j = array->getSize() - 1; i < j; i++, j--)
	{
		tmp = (*array)[i];
		(*array)[i] = (*array)[j];
		(*array)[j] = tmp;
	}
	return ;
}

template<typename T>
void	TryCatchArray(std::string element, Array<T> array, size_t i) {

	try
	{
		std::cout << element << " = " << array[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

template<typename T>
void	TryAssignation(Array<T> *array, size_t i, T value)
{
	try
	{
		(*array)[i] = value;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
