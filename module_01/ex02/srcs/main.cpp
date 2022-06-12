/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 14:27:52 by emtran            #+#    #+#             */
/*   Updated: 2022/06/12 14:52:46 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {

	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::endl << "\033[1;31m==========        ADRESSES        ==========\e[0m" << std::endl << std::endl;
	std::cout << "Adress of string 💬 : " << &string << std::endl;
	std::cout << "Adress of stringPTR 🔝 : " << stringPTR << std::endl;
	std::cout << "Adress of stringREF 〽️ : " << &stringREF << std::endl;
	std::cout << std::endl << "\033[1;34m==========         VALUES         ==========\e[0m" << std::endl << std::endl;
	std::cout << "Value of string 💬 : " << string << std::endl;
	std::cout << "Value of stringPTR 🔝 : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF 〽️ : " << stringREF << std::endl;
}
