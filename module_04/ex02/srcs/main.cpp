/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:17:10 by emtran            #+#    #+#             */
/*   Updated: 2022/07/22 16:25:18 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define NB_AAnimalS 6

int	main(void)
{
	std::cout << "\033[1;32m==========      CONSTRUCTOR 1      ==========\e[0m" << std::endl << std::endl;

	AAnimal	*AAnimals[NB_AAnimalS];
	Brain	*brain;

	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;

	for (int i = 0; i < NB_AAnimalS; i++)
	{
		if (i % 2)
			AAnimals[i] = new Dog;
		else
			AAnimals[i] = new Cat;
		std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1;36m==========    CAFE PHILO SAUVAGE   ==========\e[0m" << std::endl << std::endl;

	brain = AAnimals[2]->getBrain();
	brain->ideas[0] = "I wannnnnnt huuugs 😽";
	brain->ideas[1] = "I wannnnnnt sleeeep 🙀";
	brain->ideas[2] = "I wannnnnnt broke your father 😾";
	brain->ideas[3] = "I wannnnnnt foooods 😻";
	std::cout << AAnimals[2]->getBrain()->ideas[2] << std::endl;
	std::cout << AAnimals[4]->getBrain()->ideas[2] << std::endl;
	std::cout << "\033[1;37m--------------------------------------------\e[0m" << std::endl;
	*(AAnimals[4]) = *(AAnimals[2]);
	std::cout << AAnimals[2]->getBrain()->ideas[2] << std::endl;
	std::cout << AAnimals[4]->getBrain()->ideas[2] << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;31m==========      DESTRUCTOR 1       ==========\e[0m" << std::endl << std::endl;

	for (int i = 0; i < NB_AAnimalS; i++)
	{
		delete AAnimals[i];
		std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1;32m==========      CONSTRUCTOR 2      ==========\e[0m" << std::endl << std::endl;

	const AAnimal	*i = new Cat();
	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	const AAnimal	*j = new Dog();

	std::cout << std::endl;
	std::cout << "\033[1;31m==========      DESTRUCTOR 2       ==========\e[0m" << std::endl << std::endl;

	delete i;
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	delete j;

	std::cout << std::endl;

	// std::cout << "\033[1;36m==========     LES INTERDITS      ==========\e[0m" << std::endl << std::endl;

	// Dog	*Bouboule = new Dog;
	// Dog	*Batawaf = new Dog(*Bouboule);

	// delete Bouboule;
	// delete Batawaf;

	// std::cout << std::endl;

	// Dog Bouboule;
	// Dog Batawaf = Bouboule;

	return (0);
}
