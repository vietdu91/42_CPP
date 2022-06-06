/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:57:30 by emtran            #+#    #+#             */
/*   Updated: 2022/06/06 18:06:05 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

void	Contact::print_string(std::string str) {

	std::cout << std::setw(10);
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	std::cout << str << "|";
}

void	Contact::display_contact(void) {

	std::cout << "TADAM ✨ ! Here is the contact information of your friend you asked for: " << std::endl;
	std::cout << "😃 First name: " << this->_first_name << std::endl;
	std::cout << "😋 Last name: " << this->_last_name << std::endl;
	std::cout << "😁 Nickname: " << this->_nickname << std::endl;
	std::cout << "📞 Number: " << this->_phone_number << std::endl;
	std::cout << "😏 Secret: " << this->_darkest_secret << std::endl;
}
void	Contact::display_identity_for_search(void) {

	print_string(this->_first_name);
	print_string(this->_last_name);
	print_string(this->_nickname);
	std::cout << std::endl;
}

void	Contact::get_new_contact(void) {

	std::cout << "What's your First Name 😃 : ";
	get_line_of_string(this->_first_name);
	std::cout << "What's your Last Name 😋 : ";
	get_line_of_string(this->_last_name);
	std::cout << "What's your Nickname 😁 : ";
	get_line_of_string(this->_nickname);
	std::cout << "What's your Phone Number  : ";
	get_line_of_string(this->_phone_number);
	std::cout << "What's your darkest Secret 😏 : ";
	get_line_of_string(this->_darkest_secret);
}
