/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:42:29 by emtran            #+#    #+#             */
/*   Updated: 2022/08/01 18:48:31 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public :
		AForm ();
		AForm (std::string const name, unsigned int const gradeSign, unsigned int const gradeExec);
		AForm(AForm const &src);
		~AForm();

		AForm	&operator=(AForm const &rhs);

		std::string const	getName() const;
		bool				getStatusForm() const;
		unsigned int 		getGradeSign() const;
		unsigned int 		getGradeExec() const;

		virtual void		execute() const = 0;

		void	beSigned(Bureaucrat const &employe);
		void	beExecuted(Bureaucrat const &executor);

		class GradeTooHighException : public std::exception {
			public :
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				const char* what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public :
				const char* what() const throw();
		};

	private :
		std::string const	_name;
		bool				_formSigned;
		unsigned int 		_gradeSign;
		unsigned int 		_gradeExec;
};

std::ostream	&operator<<(std::ostream &o, AForm const &rhs);

#endif
