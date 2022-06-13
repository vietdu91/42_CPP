/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:31:09 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 13:39:47 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBUG "I love having extra bacon for \
my7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"
# define INFO "I cannot believe addng extra bacon costsmore money. You didn't put \
enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
# define WARNING "I think I deserve to have some extra bacon for free. I've been \
coming for years wheread you started working here since last mouth.\n"
# define ERROR "This is unacceptable! I want to speak to the manager now\n"

class Harl {

	public:
		Harl();
		~Harl();

		void	complain(std::string level);

	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
};

#endif
