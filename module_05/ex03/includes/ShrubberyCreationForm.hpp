/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:38:50 by emtran            #+#    #+#             */
/*   Updated: 2022/08/01 19:18:22 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCREATIONFORM_HPP
# define ShrubberyCREATIONFORM_HPP

# include "AForm.hpp"
# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);

		virtual void	execute() const;

		class FailShrubbery : public std::exception {

			public:
				virtual const char *what() const throw();
		};

	private:
		std::string const	_target;
};

#endif
