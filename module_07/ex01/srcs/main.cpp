/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:21:49 by emtran            #+#    #+#             */
/*   Updated: 2022/08/18 13:55:43 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

/// TEST CORRECTION

class Awesome {
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template<typename T>
void print( T  const & x ) {
	std::cout << x << std::endl;
	return;
}

void	classTest(void)
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
}

/// FUNCTIONS TEST

template<typename T>
void	upUpUpUp(T &array) {

	array++;
}

template<typename T>
void	inverseLaTendance(T &array) {

	array = array * -1;
}

template<typename T>
void	crazyWord(T &array) {

	array = array + 5;
}

template<typename T>
void	display(T const &elem) {

	std::cout << elem << "  ";
}

/// MAIN TEST

int main() {

	std::cout  << std::endl << "\033[1;31m==========     🎨 TEST STARCK : INT     ==========\e[0m" << std::endl;

	int	intArray[6] = {-66, -6, 6, 9, 66, 69};

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl << SKY;

	iter<int>(intArray, 6, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << YELLOW_B << "____ UPSIDE OUTSIDE ____" << RESET << std::endl << std::endl << GREEN;

	iter<int>(intArray, 6, &upUpUpUp);
	iter<int>(intArray, 6, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << YELLOW_B << "____ FASHION VICTIM? ____" << RESET << std::endl << std::endl << PINK;

	iter<int>(intArray, 6, &inverseLaTendance);
	iter<int>(intArray, 6, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout  << std::endl << "\033[1;32m==========     🥃 TEST RHUM : CHAR      ==========\e[0m" << std::endl;

	char charArray[] = "Damoiseau C Tro Bon";

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl << SKY;

	iter<char>(charArray, 19, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << YELLOW_B << "____ UPSIDE OUTSIDE ____" << RESET << std::endl << std::endl << GREEN;

	iter<char>(charArray, 19, &upUpUpUp);
	iter<char>(charArray, 19, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << YELLOW_B << "____ CRAZY WOOORD ____" << RESET << std::endl << std::endl << PINK;

	iter<char>(charArray, 19, &crazyWord);
	iter<char>(charArray, 19, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout  << std::endl << "\033[1;34m========== 🚽 TEST CHASSE D'EAU : FLOAT ==========\e[0m" << std::endl;

	float	floatArray[6] = {-66.9, -6.9, 6.9, 9.6, 66.9, 69.6};

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl << SKY;

	iter<float>(floatArray, 6, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << YELLOW_B << "____ UPSIDE OUTSIDE ____" << RESET << std::endl << std::endl << GREEN;

	iter<float>(floatArray, 6, &upUpUpUp);
	iter<float>(floatArray, 6, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << YELLOW_B << "____ FASHION VICTIM? ____" << RESET << std::endl << std::endl << PINK;

	iter<float>(floatArray, 6, &inverseLaTendance);
	iter<float>(floatArray, 6, &display);

	std::cout << RESET << std::endl << std::endl;
	std::cout << std::endl << "\033[1;35m==========  🧑‍🏫 TEST GUY LUX : CLASS   ==========\e[0m" << std::endl << std::endl;

	classTest();
}
