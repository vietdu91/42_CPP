/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:20:10 by emtran            #+#    #+#             */
/*   Updated: 2022/08/16 16:45:24 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

/// TEST CORRECTION

class Awesome {

	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int	getN(void) const { return (this->_n); }

	private:
		int _n;
};

std::ostream	&operator<<(std::ostream &ostream, Awesome const &awesome) {

	ostream << awesome.getN();
	return (ostream);
};

/// MAIN TEST

int main() {

	std::cout  << std::endl << "\033[1;31m==========     🎨 TEST STARCK : INT     ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl;

	int a = 6;
	int b = 9;

	std::cout << SKY_B << "a = " << RESET << BLUE << a << RESET << PINK_B << "			b = " << RESET << RED << b << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ SWAPING SWAPEAU ____" << RESET << std::endl << std::endl;

	::swap(a,b);
	std::cout << SKY_B << "a = " << RESET << RED << a << RESET << PINK_B << "			b = " << RESET << BLUE << b << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ WHO'S THE STAR? ____" << RESET << std::endl << std::endl;

	std::cout << GREEN_B << "👶 min(a,b) = " << RESET << YELLOW << ::min(a,b) << RESET << std::endl;
	std::cout << GREEN_B << "🧓 max(a,b) = " << RESET << YELLOW << ::max(a,b) << RESET << std::endl << std::endl;

	std::cout  << std::endl << "\033[1;32m==========     🥃 TEST RHUM : CHAR      ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl;

	std::string c = "John Lennon";
	std::string d = "John Cena";

	std::cout << SKY_B << "c = " << RESET << BLUE << c << RESET << PINK_B << "			d = " << RESET << RED << d << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ SWAPING SWAPEAU ____" << RESET << std::endl << std::endl;

	::swap(c,d);
	std::cout << SKY_B << "c = " << RESET << RED << c << RESET << PINK_B << "			d = " << RESET << BLUE << d << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ WHO'S THE STAR? ____" << RESET << std::endl << std::endl;

	std::cout << GREEN_B << "👶 min(c,d) = " << RESET << YELLOW << ::min(c,d) << RESET << std::endl;
	std::cout << GREEN_B << "🧓 max(c,d) = " << RESET << YELLOW << ::max(c,d) << RESET << std::endl << std::endl;

	std::cout  << std::endl << "\033[1;36m==========  ⛵ TEST FORD BOYARD : BOOL  ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl;

	bool e = true;
	bool f = false;

	std::cout << SKY_B << "e = " << RESET << BLUE << e << RESET << PINK_B << "			f = " << RESET << RED << f << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ SWAPING SWAPEAU ____" << RESET << std::endl << std::endl;

	::swap(e,f);
	std::cout << SKY_B << "e = " << RESET << RED << e << RESET << PINK_B << "			f = " << RESET << BLUE << f << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ WHO'S THE STAR? ____" << RESET << std::endl << std::endl;

	std::cout << GREEN_B << "👶 min(e,f) = " << RESET << YELLOW << ::min(e,f) << RESET << std::endl;
	std::cout << GREEN_B << "🧓 max(e,f) = " << RESET << YELLOW << ::max(e,f) << RESET << std::endl << std::endl;

	std::cout  << std::endl << "\033[1;34m========== 🚽 TEST CHASSE D'EAU : FLOAT ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl;

	float g = 66.6f;
	float h = 69.0f;

	std::cout << SKY_B << "g = " << RESET << BLUE << g << RESET << PINK_B << "			h = " << RESET << RED << h << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ SWAPING SWAPEAU ____" << RESET << std::endl << std::endl;

	::swap(e,f);
	std::cout << SKY_B << "g = " << RESET << RED << g << RESET << PINK_B << "			h = " << RESET << BLUE << h << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ WHO'S THE STAR? ____" << RESET << std::endl << std::endl;

	std::cout << GREEN_B << "👶 min(g,h) = " << RESET << YELLOW << ::min(g,h) << RESET << std::endl;
	std::cout << GREEN_B << "🧓 max(g,h) = " << RESET << YELLOW << ::max(g,h) << RESET << std::endl << std::endl;

	std::cout  << std::endl << "\033[1;35m==========  🧑‍🏫 TEST GUY LUX : CLASS   ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl;

	Awesome i = Awesome(666);
	Awesome j = Awesome(69);

	std::cout << SKY_B << "i = " << RESET << BLUE << i << RESET << PINK_B << "			j = " << RESET << RED << j << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ SWAPING SWAPEAU ____" << RESET << std::endl << std::endl;

	::swap(i,j);
	std::cout << SKY_B << "i = " << RESET << RED << i << RESET << PINK_B << "			j = " << RESET << BLUE << j << RESET << std::endl << std::endl;

	std::cout << YELLOW_B << "____ WHO'S THE STAR? ____" << RESET << std::endl << std::endl;

	std::cout << GREEN_B << "👶 min(i,j) = " << RESET << YELLOW << ::min(i,j) << RESET << std::endl;
	std::cout << GREEN_B << "🧓 max(i,j) = " << RESET << YELLOW << ::max(i,j) << RESET << std::endl << std::endl;

	return (0);
}
