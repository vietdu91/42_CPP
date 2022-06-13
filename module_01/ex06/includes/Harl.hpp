/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:34:26 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 16:24:17 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <cstdlib>

# define DEBUG "\033[1;31mI love having extra bacon for \
my7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\e[0m\n"
# define INFO "\033[1;32mI cannot believe addng extra bacon costsmore money. You didn't put \
enough bacon in my burger! If you did, I wouldn't be asking for more!\e[0m\n"
# define WARNING "\033[1;33mI think I deserve to have some extra bacon for free. I've been \
coming for years wheread you started working here since last mouth.\e[0m\n"
# define ERROR "\033[1;34mThis is unacceptable! I want to speak to the manager now\e[0m\n"
# define ELSE "\033[1;35m[ Probably complaining about insignificant problems ]\e[0m\n"
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
