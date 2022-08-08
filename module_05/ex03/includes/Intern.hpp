/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:13:32 by emtran            #+#    #+#             */
/*   Updated: 2022/08/08 12:05:32 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern {

	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern	&operator=(Intern const &rhs);

		class NoForm : public std::exception {

			public:
				virtual const char *what() const throw();

		};

		AForm	*makeForm(std::string name, std::string target);

	private:
		AForm	*_makeShrubberyCreationForm(std::string target);
		AForm	*_makeRobotomyRequestForm(std::string target);
		AForm	*_makePresidentialPardonForm(std::string target);
};

#endif
