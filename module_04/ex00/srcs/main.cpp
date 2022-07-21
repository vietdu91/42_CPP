/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:58:24 by emtran            #+#    #+#             */
/*   Updated: 2022/07/21 17:13:03 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\033[1;32m==========       CONSTRUCTOR      ==========\e[0m" << std::endl << std::endl;

	const Animal	*ani = new Animal();
	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	const Animal	*cat = new Cat();
	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	const Animal	*dog = new Dog();

	std::cout << std::endl;
	std::cout << "\033[1;36m==========   CONCERT DES ANIMAUX  ==========\e[0m" << std::endl << std::endl;

	// std::cout << ani->getType() << " " << std::endl;
	// std::cout << cat->getType() << " " << std::endl;
	// std::cout << dog->getType() << " " << std::endl;
	ani->makeSound();
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	cat->makeSound();
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	dog->makeSound();

	std::cout << std::endl;
	std::cout << "\033[1;31m==========       DESTRUCTOR       ==========\e[0m" << std::endl << std::endl;

	delete ani;
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	delete cat;
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	delete dog;

	// Wrong animals
	std::cout << std::endl;
	std::cout << "\033[1;32m==========  CONSTRUCTOR OF WRONGS ==========\e[0m" << std::endl << std::endl;

	const WrongAnimal	*w_ani = new WrongAnimal();
	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	const WrongAnimal	*w_cat = new WrongCat();
	std::cout << "\033[1;32m--------------------------------------------\e[0m" << std::endl;
	const WrongCat		*w_cat2 = new WrongCat();

	std::cout << std::endl;
	std::cout << "\033[1;36m==========  DANSE DES FAUSSAIRES  ==========\e[0m" << std::endl << std::endl;

	// std::cout << w_ani->getType() << " " << std::endl;
	// std::cout << w_cat->getType() << " " << std::endl;
	// std::cout << w_cat2->getType() << " " << std::endl;
	w_ani->makeSound();
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	w_cat->makeSound();
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	w_cat2->makeSound();

	std::cout << std::endl;
	std::cout << "\033[1;31m==========   DESTRUCTOR OF WRONGS  ==========\e[0m" << std::endl << std::endl;

	delete w_ani;
	std::cout << "\033[1;36m--------------------------------------------\e[0m" << std::endl;
	delete w_cat;

	return (0);
}
