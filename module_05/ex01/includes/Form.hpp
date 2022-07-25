/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:42:29 by emtran            #+#    #+#             */
/*   Updated: 2022/07/25 16:53:50 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

	public :
		Form ();
		Form (std::string const name, unsigned int const gradeSign, unsigned int const gradeExec);
		Form(Form const &src);
		~Form();

		Form	&operator=(Form const &rhs);

		std::string const	getName() const;
		bool				getStatusForm() const;
		unsigned int const	getGradeSign() const;
		unsigned int const	getGradeExec() const;

		void	beSigned();

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};

	private :
		std::string const	_name;
		bool				_formSigned;
		unsigned int const	_gradeSign;
		unsigned int const	_gradeExec;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif
