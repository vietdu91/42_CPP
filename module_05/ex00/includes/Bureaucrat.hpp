/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:22:24 by Manu              #+#    #+#             */
/*   Updated: 2022/07/25 13:50:11 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# include "colors.hpp"

class Bureaucrat {

	public :
		Bureaucrat ();
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &rhs);

		std::string const	getName() const;
		unsigned int		getGrade() const;

		void	promotionCanape();
		void	declassementSocial();

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
		unsigned int		_grade;

};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
