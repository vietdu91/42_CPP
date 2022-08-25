/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:04:57 by emtran            #+#    #+#             */
/*   Updated: 2022/08/25 14:21:38 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"


void	AddNumber(Span *span, int nb) {

	try
	{
		span->addNumber(nb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	ShortestSpan(Span *span) {

	try
	{
		int shortestSpan = span->shortestSpan();
		std::cout << GREEN_B << "The shortest way to cross the eastern border  : " << RESET << PINK_B << shortestSpan << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

void	LongestSpan(Span *span) {

	try
	{
		int longestSpan = span->longestSpan();
		std::cout << GREEN_B << "The longest way to cross the eastern border  : " << RESET << PINK_B << longestSpan << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

int main() {

	std::cout << std::endl << "\033[1;36m==========         PEDRO'S CROSSING  🚣         ==========\e[0m" << std::endl << std::endl;

	Span span = Span(5);

	AddNumber(&span, 6);
	AddNumber(&span, 3);
	AddNumber(&span, 17);
	AddNumber(&span, 9);
	AddNumber(&span, 11);

	std::cout << YELLOW_B << "____ PARCOURS DU COMBATTANT " << " ____" << RESET << std::endl << std::endl;

	std::cout << SKY_B << "	" << span << RESET << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ L'ERREUR DE CHEMIN " << " ____" << RESET << std::endl << std::endl;

	AddNumber(&span, 1); // Error space

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ A LA RECHERCHE DE SON DESTIN " << " ____" << RESET << std::endl << std::endl;

	ShortestSpan(&span);
	LongestSpan(&span);

	std::cout << std::endl;
	std::cout << std::endl << "\033[1;35m==========         THIERRY'S CROSSING  🤸         ==========\e[0m" << std::endl << std::endl;

	Span span2 = Span(250);

	AddNumber(&span2, 1);
	AddNumber(&span2, 2);

	std::cout << YELLOW_B << "____ PARCOURS DU COMBATTANT " << " ____" << RESET << std::endl << std::endl;

	std::cout << SKY_B << "	" << span2 << RESET << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ LA TRAVERSEE INFERNALE " << " ____" << RESET << std::endl << std::endl;

	std::vector<int> Vector;

	for (int i = 3; i < 200; i++)
		Vector.push_back(i);

	try
	{
		span2.addALotOfNumbers(Vector.begin(), Vector.end());
		std::cout << SKY_B << "	" << span2 << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ L'ERREUR DE CHEMIN " << " ____" << RESET << std::endl << std::endl;

	try
	{
		span2.addALotOfNumbers(Vector.begin(), Vector.end()); // Error space
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ A LA RECHERCHE DE SON DESTIN " << " ____" << RESET << std::endl << std::endl;

	ShortestSpan(&span2);
	LongestSpan(&span2);

	std::cout << std::endl;
	std::cout << std::endl << "\033[1;34m==========         PEI MEI'S CROSSING  🧗         ==========\e[0m" << std::endl << std::endl;

	std::cout << "\033[1;35mPei Mei could not reach where he would like to go... happiness seems far away...\e[0m" << std::endl << std::endl;

	Span spanEmpty = Span(0);

	std::cout << YELLOW_B << "____ PARCOURS DU COMBATTANT " << " ____" << RESET << std::endl << std::endl;
	std::cout << SKY_B << "	" << spanEmpty << RESET << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ L'ERREUR DE CHEMIN " << " ____" << RESET << std::endl << std::endl;

	AddNumber(&spanEmpty, 1); // Error space
	ShortestSpan(&spanEmpty); // Error span
	LongestSpan(&spanEmpty); // Error span

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ LA NOUVELLE TENTATIVE " << " ____" << RESET << std::endl << std::endl;

	Span span3 = Span(1);
	AddNumber(&span3, 6);
	std::cout << SKY_B << "	" << span3 << RESET << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ FACE A LA FATALITE DU MONDE " << " ____" << RESET << std::endl << std::endl;

	AddNumber(&span3, 1);  // Error space
	ShortestSpan(&span3); // Error span
	LongestSpan(&span3); // Error span

	return (0);
}
