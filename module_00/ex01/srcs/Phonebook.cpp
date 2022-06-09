/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:00:40 by emtran            #+#    #+#             */
/*   Updated: 2022/06/09 14:41:56 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

Phonebook::Phonebook(void) {

	this->_count = 0;
	return ;
}

Phonebook::~Phonebook(void) {

	return ;
}

void 	Phonebook::get_line_of_wrong_index(std::string& input) {

	std::cout << "\033[5;34mBad index ⛔ Booooooooouuuh ! Please enter an index: \e[0m";
	this->get_index(input);
}

void	Phonebook::get_index(std::string& input) {

	get_line_of_index(input);
	int index = std::atoi(input.c_str());
	if (index >= 1 && index <= 8 && index <= this->_count)
		this->display_one_contact(index - 1);
	else
		get_line_of_wrong_index(input);
}

int		Phonebook::get_count(void) {

	return (this->_count);
}

void	Phonebook::put_new_contact_in_pb(unsigned int i) {

	this->_contact[i].get_new_contact();
	if (this->_count < 8)
		this->_count++;
	std::cout << "\033[1;31mA new friend is added!\e[0m 💕" << std::endl \
	<< std::endl;
}

void	Phonebook::display_one_contact(int i) {

	this->_contact[i].display_contact();
}

void	Phonebook::display_contacts(void) {

	int	i = 0;
	std::cout << "     ________________________________ " << std::endl;
	std::cout << "    |    😃    |    😋    |    😁    |" << std::endl;
	std::cout << "    |FIRST_NAME| LAST_NAME| NICKNAME | " << std::endl;
	std::cout << " ___|__________|__________|__________| " << std::endl;
	while (i < 8)
	{
		std::cout << "|" << std::setw(3) << i + 1 << "|";
		this->_contact[i].display_identity_for_search();
		i++;
	}
	std::cout << std::endl << std::endl;
}
