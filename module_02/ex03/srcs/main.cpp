/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 15:27:27 by emtran            #+#    #+#             */
/*   Updated: 2022/06/20 09:20:47 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {

	Point a(0.0f, 0.0f);
	Point b(10.5f, 0.0f);
	Point c(5.0f, 5.5f);

	std::cout << std::endl << "\033[1;31m==========        D IN TRIANGLE ABC?        ==========\e[0m" << std::endl << std::endl;

	std::cout << "\033[1;35mTriangle ABC with :\e[0m" << std::endl;
	std::cout << "\033[1;35m	A\e[0m " << a << std::endl;
	std::cout << "\033[1;35m	B\e[0m " << b << std::endl;
	std::cout << "\033[1;35m	C\e[0m " << c << std::endl << std::endl;

	Point d(7.5f, 2.9f);

	std::cout << "\033[1;36mWe have a point D with\e[0m" << std::endl;
	std::cout << "\033[1;36m	D\e[0m " << d << std::endl << std::endl;

	std::cout << "\033[1;37mLet's do some magic tricks... 🪄👯\e[0m" << std::endl << std::endl;
	std::cout << "\033[1;37m	And we know that D is ";
	if (bsp(a, b, c, d) == false)
		std::cout << "\e[0m\033[1;31mnot \e[0m\033[1;37m";
	std::cout << "in the triangle \e[0m";
	if (bsp(a, b, c, d) == false)
		std::cout << "🔻" << std::endl;
	else
		std::cout << "🔺" << std::endl;

	std::cout << std::endl << "\033[1;32m==========        E IN TRIANGLE ABC?        ==========\e[0m" << std::endl << std::endl;

	std::cout << "\033[1;35mTriangle ABC with :\e[0m" << std::endl;
	std::cout << "\033[1;35m	A\e[0m " << a << std::endl;
	std::cout << "\033[1;35m	B\e[0m " << b << std::endl;
	std::cout << "\033[1;35m	C\e[0m " << c << std::endl << std::endl;

	Point e(7.5f, 3.0f);

	std::cout << "\033[1;36mWe have a point E with\e[0m" << std::endl;
	std::cout << "\033[1;36m	E\e[0m " << e << std::endl << std::endl;

	std::cout << "\033[1;37mLet's do some magic tricks... 🪄👯\e[0m" << std::endl << std::endl;
	std::cout << "\033[1;37m	And we know that E is ";
	if (bsp(a, b, c, e) == false)
		std::cout << "\e[0m\033[1;31mnot \e[0m\033[1;37m";
	std::cout << "in the triangle \e[0m";
	if (bsp(a, b, c, e) == false)
		std::cout << "🔻" << std::endl;
	else
		std::cout << "🔺" << std::endl;

	std::cout << std::endl << "\033[1;33m==========        F IN TRIANGLE ABC?        ==========\e[0m" << std::endl << std::endl;

	std::cout << "\033[1;35mTriangle ABC with :\e[0m" << std::endl;
	std::cout << "\033[1;35m	A\e[0m " << a << std::endl;
	std::cout << "\033[1;35m	B\e[0m " << b << std::endl;
	std::cout << "\033[1;35m	C\e[0m " << c << std::endl << std::endl;

	Point f(7.5f, 3.1f);

	std::cout << "\033[1;36mWe have a point F with\e[0m" << std::endl;
	std::cout << "\033[1;36m	F\e[0m " << f << std::endl << std::endl;

	std::cout << "\033[1;37mLet's do some magic tricks... 🪄👯\e[0m" << std::endl << std::endl;
	std::cout << "\033[1;37m	And we know that F is ";
	if (bsp(a, b, c, f) == false)
		std::cout << "\e[0m\033[1;31mnot \e[0m\033[1;37m";
	std::cout << "in the triangle \e[0m";
	if (bsp(a, b, c, f) == false)
		std::cout << "🔻" << std::endl;
	else
		std::cout << "🔺" << std::endl;

	std::cout << std::endl << "\033[1;34m==========        G IN TRIANGLE ABC?        ==========\e[0m" << std::endl << std::endl;

	std::cout << "\033[1;35mTriangle ABC with :\e[0m" << std::endl;
	std::cout << "\033[1;35m	A\e[0m " << a << std::endl;
	std::cout << "\033[1;35m	B\e[0m " << b << std::endl;
	std::cout << "\033[1;35m	C\e[0m " << c << std::endl << std::endl;

	Point g(0.0f, 0.0f);

	std::cout << "\033[1;36mWe have a point G with\e[0m" << std::endl;
	std::cout << "\033[1;36m	G\e[0m " << g << std::endl << std::endl;

	std::cout << "\033[1;37mLet's do some magic tricks... 🪄👯\e[0m" << std::endl << std::endl;
	std::cout << "\033[1;37m	And we know that G is ";
	if (bsp(a, b, c, g) == false)
		std::cout << "\e[0m\033[1;31mnot \e[0m\033[1;37m";
	std::cout << "in the triangle \e[0m";
	if (bsp(a, b, c, g) == false)
		std::cout << "🔻" << std::endl;
	else
		std::cout << "🔺" << std::endl << std::endl;

	return (0);
}
