/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:56:38 by emtran            #+#    #+#             */
/*   Updated: 2022/08/18 16:46:43 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {

	std::cout  << std::endl << "\033[1;39m==========         🚷 CRASH TEST        ==========\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ EMPTY LIKE YOUR SOUL ____" << RESET << std::endl << std::endl << GREEN;

	Array<int>	emptyArray;
	std::cout << BLUE_B << "WOW 🤩 🤤 !!! Your array sizes : " << RESET << PINK_B << emptyArray.getSize() << RESET << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ 3 LITTLE PIGS ____" << RESET << std::endl << std::endl << GREEN;

	Array<int>	array(3);
	std::cout << BLUE_B << "WOW 🤩 🤤 !!! Your array sizes : " << RESET << PINK_B << emptyArray.getSize() << RESET << std::endl;

	std::cout << std::endl;
	std::cout  << std::endl << "\033[1;31m==========     🎨 TEST STARCK : INT     ==========\e[0m" << std::endl << std::endl;

	int	intTab[6] = {-66, -6, 6, 9, 66, 69};
	Array<int>	intArray(6);

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl << SKY;

	std::cout << intArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ SETUP OF GALLERY ____" << RESET << std::endl << std::endl << SKY;

	for (size_t i = 0; i < intArray.getSize(); i++)
		TryAssignation(&intArray, i, intTab[i]);
	std::cout << intArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ HALTE AUX COPIEURS D'ART ____" << RESET << std::endl << std::endl << SKY;

	Array<int>	intCopy(intArray);
	std::cout << intCopy << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ RENVERSE ME STP ____" << RESET << std::endl << std::endl << GREEN;

	InverseArray<int>(&intArray);
	std::cout << intArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ ASSIGN ME STP ____" << RESET << std::endl << std::endl << GREEN;

	Array<int>	intAssign;
	intAssign = intArray;
	TryCatchArray("Array[2]", intArray, 2);
	TryAssignation(&intArray, 2, intTab[0]);
	TryCatchArray("Array[2]", intArray, 2);
	TryCatchArray("Array[8]", intArray, 8);

	std::cout << std::endl;
	std::cout  << std::endl << "\033[1;32m==========     🥃 TEST RHUM : CHAR      ==========\e[0m" << std::endl << std::endl;

	char	charTab[] = "Gerard est un constant heureux!";
	Array<char>	charArray(17);

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl << SKY;

	std::cout << charArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ SETUP OF GALLERY ____" << RESET << std::endl << std::endl << SKY;

	for (size_t i = 0; i < charArray.getSize(); i++)
		TryAssignation(&charArray, i, charTab[i]);
	std::cout << charArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ HALTE AUX COPIEURS D'ART ____" << RESET << std::endl << std::endl << SKY;

	Array<char>	charCopy(charArray);
	std::cout << charCopy << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ RENVERSE ME STP ____" << RESET << std::endl << std::endl << GREEN;

	InverseArray<int>(&intArray);
	std::cout << charArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ ASSIGN ME STP ____" << RESET << std::endl << std::endl << GREEN;

	Array<char>	charAssign;
	charAssign = charArray;
	TryCatchArray("Array[2]", charArray, 2);
	TryAssignation(&charArray, 2, charTab[0]);
	TryCatchArray("Array[2]", charArray, 2);
	TryCatchArray("Array[8]", charArray, 8);

	std::cout << std::endl;
	std::cout << std::endl << "\033[1;34m========== 🚽 TEST CHASSE D'EAU : FLOAT ==========\e[0m" << std::endl << std::endl;

	float	floatTab[6] = {-66.9, -6.9, 6.9, 9.6, 66.9, 69.6};
	Array<float>	floatArray(6);

	std::cout << std::endl << std::endl;
	std::cout << YELLOW_B << "____ PRESENTATION OF ART OBJECTS ____" << RESET << std::endl << std::endl << SKY;

	std::cout << floatArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ SETUP OF GALLERY ____" << RESET << std::endl << std::endl << SKY;

	for (size_t i = 0; i < floatArray.getSize(); i++)
		TryAssignation(&floatArray, i, floatTab[i]);
	std::cout << floatArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ HALTE AUX COPIEURS D'ART ____" << RESET << std::endl << std::endl << SKY;

	Array<float>	floatCopy(floatArray);
	std::cout << floatCopy << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ RENVERSE ME STP ____" << RESET << std::endl << std::endl << GREEN;

	InverseArray<float>(&floatArray);
	std::cout << floatArray << std::endl;

	std::cout << std::endl;
	std::cout << YELLOW_B << "____ ASSIGN ME STP ____" << RESET << std::endl << std::endl << GREEN;

	Array<float>	floatAssign;
	floatAssign = floatArray;
	TryCatchArray("Array[2]", floatArray, 2);
	TryAssignation(&floatArray, 2, floatTab[0]);
	TryCatchArray("Array[2]", floatArray, 2);
	TryCatchArray("Array[8]", floatArray, 8);

	std::cout << std::endl << std::endl;

	return (0);
}
