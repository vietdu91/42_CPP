/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:32:58 by emtran            #+#    #+#             */
/*   Updated: 2022/08/26 11:58:09 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

template<typename T>
void	display(T &data, std::string name)
{
	if (data.size() < 0)
		return ;

	typename T::iterator it = data.begin();
	typename T::iterator ite = data.end();

	++it;
	--it;
	std::cout << GREEN_B " " << name << " : " << RESET << RED_B << "{ ";
	while (it != ite)
	{
		std::cout << *it;
		++it;
		if (it != ite)
			std::cout << ", ";
	}
	std::cout << " }" << RESET << std::endl;
}

int main() {

	std::cout << std::endl << "\033[1;36m==========         MUTANT S2FGS6336A 👽        ==========\e[0m" << std::endl << std::endl;

	MutantStack<int> mstack;

	std::cout << YELLOW_B << "____ DECOUVERTE DE L'ESPECE " << " ____" << RESET << std::endl << std::endl;

	mstack.push(5);
	mstack.push(17);
	display(mstack, "MutantStack");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << mstack.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << mstack.top() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ DISSECTION " << " ____" << RESET << std::endl << std::endl;

	mstack.pop();
	display(mstack, "MutantStack");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << mstack.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << mstack.top() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ AJOUT DE FONCTIONNALITES POUR L'INTEGRATION " << " ____" << RESET << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	for (int i = 100; i < 170; i += 10)
		mstack.push(i);
	mstack.pop();
	mstack.pop();
	mstack.push(0);

	display(mstack, "MutantStack");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << mstack.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << mstack.top() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ ASSIMILATION PAR COPIE " << " ____" << RESET << std::endl << std::endl;

	MutantStack<int> copy;
	copy = mstack;
	display(copy, "Copy       ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << copy.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << copy.top() << RESET << std::endl;

	std::cout << std::endl << "\033[1;35m==========            PERSON LIST 🦶           ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ DECOUVERTE DE L'ESPECE " << " ____" << RESET << std::endl << std::endl;

	std::list<int> list;

	list.push_back(5);
	list.push_back(17);
	display(list, "List       ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << list.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << list.back() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ DISSECTION " << " ____" << RESET << std::endl << std::endl;

	list.pop_back();
	display(list, "List       ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << list.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << list.back() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ AJOUT DE FONCTIONNALITES POUR L'INTEGRATION " << " ____" << RESET << std::endl << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	for (int i = 100; i < 170; i += 10)
		list.push_back(i);
	list.pop_back();
	list.pop_back();
	list.push_back(0);

	display(list, "List       ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << list.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << list.back() << RESET << std::endl;

	std::cout << std::endl << "\033[1;34m==========           ANIMAL VECTOR 🐾          ==========\e[0m" << std::endl << std::endl;

	std::cout << YELLOW_B << "____ DECOUVERTE DE L'ESPECE " << " ____" << RESET << std::endl << std::endl;

	std::vector<int> vector;

	vector.push_back(5);
	vector.push_back(17);
	display(vector, "Vector     ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << vector.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << vector.back() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ DISSECTION " << " ____" << RESET << std::endl << std::endl;

	vector.pop_back();
	display(vector, "Vector     ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << vector.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << vector.back() << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ AJOUT DE FONCTIONNALITES POUR L'INTEGRATION " << " ____" << RESET << std::endl << std::endl;

	vector.push_back(3);
	vector.push_back(5);
	vector.push_back(737);
	for (int i = 100; i < 170; i += 10)
		vector.push_back(i);
	vector.pop_back();
	vector.pop_back();
	vector.push_back(0);
	display(vector, "Vector     ");
	std::cout << PINK_B << " Size        : " << RESET << SKY_B << vector.size() << RESET << std::endl;
	std::cout << PINK_B << " Last elem   : " << RESET << SKY_B << vector.back() << RESET << std::endl;

	return (0);
}
