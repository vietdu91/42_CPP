/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:02:30 by emtran            #+#    #+#             */
/*   Updated: 2022/06/06 18:48:20 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

bool is_only_spaces(std::string input) {

	return (input.find_first_not_of(SPACES) == std::string::npos);
}

void get_line_of_string(std::string& input) {

	std::getline(std::cin, input);
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
		exit(-1);
	}
	else if (input.empty() || is_only_spaces(input)) {
		std::cout << "Empty line 🤷 Please enter a string: ";
		get_line_of_string(input);
	}
}

void get_line_of_index(std::string& input) {

	std::getline(std::cin, input);
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
		exit(-1);
	}
	else if (input.empty() || is_only_spaces(input)) {
		std::cout << "\033[5;32mEmpty line 🤷 Please enter an index: \e[0m";
		get_line_of_index(input);
	}
}

void get_line_of_order(std::string& input) {

	std::getline(std::cin, input);
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
		exit(-1);
	}
	else if (input.empty() || is_only_spaces(input)) {
		std::cout << "\033[5;32mEmpty line 🤷 Please enter an order: \e[0m";
		get_line_of_order(input);
	}
}

int	main(int argc, char **argv) {

	Phonebook		phonebook;
	std::string		input;
	unsigned int	i;

	(void) argc;
	(void) argv;
/*	std::cout << "*---------------------------*" << std::endl;
	FAIRE LE PROMPT D'AFFICHAGE ICI */
	i = 0;
	while (1)
	{
		if (i == 8)
			i = 0;
		std::cout << "\033[5;32mPlease enter an order : \e[0m";
		get_line_of_order(input);
		if (input == "ADD")
		{
			phonebook.put_new_contact_in_pb(i);
			i++;
		}
		if (input == "SEARCH")
		{
			phonebook.display_contacts();
			std::cout << "\033[1;96mPlease enter an index : \e[0m";
			phonebook.get_index(input);
		}
		if (input == "EXIT" || std::cin.eof())
		{
			std::cout << "\033[1;34mThank you for using PHONEBOOK, your best phonebook " << \
			"companion 📝! Long live Francois Mitterrand!\e[0m" << std::endl;
			break;
		}
	}
	return (0);
}
