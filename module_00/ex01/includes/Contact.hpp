/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:52:26 by emtran            #+#    #+#             */
/*   Updated: 2022/06/06 18:48:04 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

# define SPACES " \t\n\v\f\r"

void get_line_of_index(std::string& input);
void get_line_of_order(std::string& input);
void get_line_of_string(std::string& input);

class	Contact {

	public:
		Contact(void);
		~Contact(void);

		void	get_new_contact(void);
		void	print_string(std::string str);
		void	display_contact(void);
		void	display_identity_for_search(void);
	private:
		std::string 	_first_name;
		std::string 	_last_name;
		std::string 	_nickname;
		std::string 	_phone_number;
		std::string 	_darkest_secret;
};
#endif
