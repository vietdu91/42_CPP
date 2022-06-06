/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 13:57:54 by emtran            #+#    #+#             */
/*   Updated: 2022/06/06 18:48:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"


class Phonebook {

	public:
		Phonebook(void);
		~Phonebook(void);

		void 	get_index(std::string& input);
		void 	get_line_of_wrong_index(std::string& input);
		void	put_new_contact_in_pb(unsigned int i);
		void	display_one_contact(int i);
		void	display_contacts(void);
		int		get_count(void);

	private:
		Contact _contact[8];
		int		_count;
};

#endif
