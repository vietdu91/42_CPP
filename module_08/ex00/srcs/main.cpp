/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:02:33 by emtran            #+#    #+#             */
/*   Updated: 2022/08/22 15:59:33 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

std::ostream	&operator<<(std::ostream &o, int *array) {

	o << "[ ";
	for (size_t i = 0; i < 7; i++)
	{
		o << array[i];
		if (i < 6)
			o << ", ";
	}
	o << " ]";
	return (o);
}

std::ostream	&operator<<(std::ostream &o, int const *array) {

	o << "[ ";
	for (size_t i = 0; i < 7; i++)
	{
		o << array[i];
		if (i < 6)
			o << ", ";
	}
	o << " ]";
	return (o);
}

template< typename T >
void	searchInVector(T &Vector, int const &nb)
{
	typename T::iterator search;

	try
	{
	 	search = easyfind(Vector, nb);
		std::cout << GREEN_B << "🤗 FOUND! It" << nb;
		std::cout << " was found at index " << search - Vector.begin() << " !!! The family is reunited 💜 !!!";
		std::cout << RESET << std::endl << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << RESET << std::endl << std::endl;
	}
}

int	main() {

	std::cout << std::endl << "\033[1;39m==========         👨‍👩‍👧‍👧 MEMBER'S ARRAY FAMILY        ==========\e[0m" << std::endl << std::endl;

	int	array[] = {-66666, -69, -6, 0, 69, 666, 9999};
	std::cout << WHITE_B << array << RESET << std::endl;

	std::cout << std::endl << "\033[1;34m==========            🏡 MEMBER'S VECTOR FAMILY          ==========\e[0m" << std::endl << std::endl;

    std::vector<int> Vector;

	std::cout << BLUE_B << "[ ";
	for (int i = 0; i < 7; i++)
	{
		Vector.push_back(array[i]);
		std::cout << Vector[i];
		if (i < 6)
			std::cout << ", ";
	}
	std::cout << "] " << RESET;

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DU PAPA " << RESET << PINK_B << "69 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	searchInVector(Vector, 69);

	std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DE MAMAN " << RESET << PINK_B << "9999 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	searchInVector(Vector, 9999);

	std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DU FISTON " << RESET << PINK_B << "-66666 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	searchInVector(Vector, -66666);

	std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DE MAMIE " << RESET << PINK_B << "0 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	searchInVector(Vector, 0);

	std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DU TONTON INCONNU " << RESET << PINK_B << "28 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	searchInVector(Vector, 28);

	std::cout << std::endl << "\033[1;36m==========           🏡 MEMBER'S LIST FAMILY         ==========\e[0m" << std::endl << std::endl;

    std::list<int> List;

	// std::cout << SKY_B << "[ ";
	// for (int i = 0; i < 7; i++)
	// {
	// 	List.push_back(array[i]);
	// 	std::cout << List[i];
	// 	if (i < 6)
	// 		std::cout << ", ";
	// }
	// std::cout << "] " << RESET;

	// std::cout << std::endl << std::endl;
	// std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DU PAPA " << RESET << PINK_B << "69 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	// searchInList(List, 69);

	// std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DE MAMAN " << RESET << PINK_B << "9999 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	// searchInList(List, 9999);

	// std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DU FISTON " << RESET << PINK_B << "-66666 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	// searchInList(List, -66666);

	// std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DE MAMIE " << RESET << PINK_B << "0 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	// searchInList(List, 0);

	// std::cout << YELLOW_B << "____ AVIS DE RECHERCHE DU TONTON INCONNU " << RESET << PINK_B << "28 🔎" << RESET << YELLOW_B << " ____" << RESET << std::endl << std::endl << SKY;

	// searchInList(List, 28);
}
