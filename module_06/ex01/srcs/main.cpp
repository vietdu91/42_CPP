/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 16:37:19 by emtran            #+#    #+#             */
/*   Updated: 2022/08/12 17:10:36 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialization.hpp"

void	test_1(int Int, std::string Str) {

	Data		data;
	uintptr_t	raw;
	Data		*dataPtr;

	std::cout << "\033[1;34m==========        BEFORE THE FACTS        ==========\e[0m" << std::endl << std::endl;

	data.Int = Int;
	data.intPtr = reinterpret_cast<void *>(data.Int);
	data.Str = Str;

	std::cout << BLUE_B << "	 	Address   : " << RESET << SKY_B << &data << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int value : " << RESET << SKY_B << data.Int << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int ptr   : " << RESET << SKY_B << data.intPtr << RESET << std::endl;
	std::cout << BLUE_B << "	 	Str value : " << RESET << SKY_B << "\'" << data.Str << "\'" << RESET << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;35m==========    SERIALIZATION OF VICTIMS    ==========\e[0m" << std::endl << std::endl;

	raw = serialize(&data);

	std::cout << GREEN_B << "	 	raw = " << RESET << SKY_B << "0x" << std::hex << raw << std::dec << RESET << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;33m==========   DESERIALIZATION OF VICTIMS   ==========\e[0m" << std::endl << std::endl;

	dataPtr = deserialize(raw);

	std::cout << BLUE_B << "	 	Address   : " << RESET << SKY_B << &data << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int value : " << RESET << SKY_B << data.Int << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int ptr   : " << RESET << SKY_B << data.intPtr << RESET << std::endl;
	std::cout << BLUE_B << "	 	Str value : " << RESET << SKY_B << "\'" << data.Str << "\'" << RESET << std::endl;
	std::cout << std::endl;
}

void	test_2(int Int, std::string Str) {

	Data		*dataPtr;
	uintptr_t	raw;
	Data		*copyDataPtr;

	std::cout << std::endl;
	std::cout << "\033[1;34m==========        BEFORE THE FACTS        ==========\e[0m" << std::endl << std::endl;

	dataPtr = new Data;
	dataPtr->Int = Int;
	dataPtr->intPtr = reinterpret_cast<void *>(dataPtr->Int);
	dataPtr->Str = Str;

	std::cout << BLUE_B << "	 	Address   : " << RESET << SKY_B << dataPtr << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int value : " << RESET << SKY_B << dataPtr->Int << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int ptr   : " << RESET << SKY_B << dataPtr->intPtr << RESET << std::endl;
	std::cout << BLUE_B << "	 	Str value : " << RESET << SKY_B << "\'" << dataPtr->Str << "\'" << RESET << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;35m==========    SERIALIZATION OF VICTIMS    ==========\e[0m" << std::endl << std::endl;

	raw = serialize(dataPtr);

	std::cout << GREEN_B << "	 	raw = " << RESET << SKY_B << "0x" << std::hex << raw << std::dec << RESET << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1;33m==========   DESERIALIZATION OF VICTIMS   ==========\e[0m" << std::endl << std::endl;

	copyDataPtr = deserialize(raw);

	std::cout << BLUE_B << "	 	Address   : " << RESET << SKY_B << copyDataPtr << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int value : " << RESET << SKY_B << copyDataPtr->Int << RESET << std::endl;
	std::cout << BLUE_B << "	 	Int ptr   : " << RESET << SKY_B << copyDataPtr->intPtr << RESET << std::endl;
	std::cout << BLUE_B << "	 	Str value : " << RESET << SKY_B << "\'" << copyDataPtr->Str << "\'" << RESET << std::endl;
	std::cout << std::endl << std::endl;

	delete dataPtr;
}

void	print_hell() {

	std::cout << "🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥\n\n";
	std::cout << "\n\033[5;91m";
	std::cout << "            (                      )\n";
	std::cout << "            |\\    _,--------._    / |\n";
	std::cout << "            | `.,'            `. /  |\n";
	std::cout << "            `  '              ,-'   '\n";
	std::cout << "             \\/_         _   (     /\n";
	std::cout << "            (,-.`.    ,',-.`. `__,'\n";
	std::cout << "             |/#\\ ),-','#\\`= ,'.` |\n";
	std::cout << "             `._/)  -'.\\_,'   ) ))|\n";
	std::cout << "             /  (_.)\\     .   -'//\n";
	std::cout << "            (  /\\____/\\    ) )`'\\\n";
	std::cout << "             \\ |V----V||  ' ,    \\\n";
	std::cout << "              |`- -- -'   ,'   \\  \\      _____\n";
	std::cout << "       ___    |         .'    \\ \\  `._,-'     `-\n";
	std::cout << "          `.__,`---^---'       \\ ` -'\n";
	std::cout << "             -.______  \\ . /  ______,-\n";
	std::cout << "                     `.     ,'            \e[0m\n\n\n";
	std::cout << "🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥🔥\n\n";
}
int	main() {

	std::cout << std::endl << RED_B << "A Serial Killer passes by here... 🗡️ 🩸" << RESET << std::endl << std::endl;

	test_1(7, "Sacred Number");
	print_hell();
	test_2(666, "SATAN");
}
