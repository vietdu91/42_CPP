/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VeritableType.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:19:18 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 17:37:58 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VeritableType.hpp"

Base::~Base() {

	std::cout << "And the magic disappears... 🐰" << std::endl;
}

Base	*generate() {

	int		randomValue;
	Base	*base;

 	srand (time(NULL));
	randomValue = (rand() % 3) + 1;
	switch (randomValue)
	{
		case 1:
			base = new A;
			break;
		case 2:
			base = new B;
			break;
		case 3:
			base = new C;
			break;
		default:
			base = NULL;
	}
	return (base);
}

void	identify(Base *p) {

	std::cout << "\033[1;34m==========      GOD MAGIC OF POINTERS      ==========\e[0m" << std::endl << std::endl;

	std::cout << GREEN_B << "And the random choised type [ptr] is " << RESET << WHITE_B << "*TANDAM* : " << RESET;
	A *classA = dynamic_cast<A *>(p);
	if (classA)
	{
		std::cout << SKY_B << "A" << RESET << std::endl;
		return ;
	}
	B *classB = dynamic_cast<B *>(p);
	if (classB)
	{
		std::cout << SKY_B << "B" << RESET << std::endl;
		return ;
	}
	C *classC = dynamic_cast<C *>(p);
	if (classC)
	{
		std::cout << SKY_B << "C" << RESET <<std::endl;
		return ;
	}
	std::cout << YELLOW_B << "The magic trick is a failure... BOUUUH!!! 💩💩💩" << RESET << std::endl;
}

void	identify(Base& p) {

	std::cout << std::endl << std::endl;
	std::cout << "\033[1;33m==========     GOD MAGIC OF REFERENCES     ==========\e[0m" << std::endl << std::endl;

	std::cout << PINK_B << "And the random choised type [ptr] is " << RESET << WHITE_B << "*TANDAM* : " << RESET;
	try
	{
		A classA = dynamic_cast<A &>(p);
		std::cout << SKY_B << "A" << RESET << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		B classB = dynamic_cast<B &>(p);
		std::cout << SKY_B << "B" << RESET << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		C classC = dynamic_cast<C &>(p);
		std::cout << SKY_B << "C" << RESET << std::endl;
		return ;
	}
	catch(const std::exception& e) {}
	std::cout << YELLOW_B << "The magic trick is a failure... BOUUUH!!! 💩💩💩" << RESET << std::endl;
}
