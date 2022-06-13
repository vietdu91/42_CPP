/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <emtran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:41:07 by emtran            #+#    #+#             */
/*   Updated: 2022/06/13 13:27:13 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>

void	error(std::string const message) {

	std::cerr << "\033[5;31mError ! \e[0m" << message << std::endl;
	exit(1);
}

void	put_arguments_to_string(char **argv, std::string &path, std::string const &str1) {

	path = argv[1];
	path.append(".replace");
	if (str1.empty())
		error("\033[1;35mEmpty argument 😈... Well tried!\e[0m");
	return ;
}

void	check_file_is_empty(std::ifstream &file) {

	std::string		line;

	std::getline(file, line);
	if (file.eof())
	{
		file.close();
		error("\033[1;33mEmpty file 🤷... Well tried!\e[0m");
	}
	file.close();
	return ;
}

void	replace_str_in_line(std::string &line, std::string const str1, std::string const str2) {

	std::size_t	pos;
	std::size_t	i = 0;

	while ((pos = line.find(str1, i)) != std::string::npos)
	{
		line.erase(pos, str1.length());
		line.insert(pos, str2);
		i = pos + str2.length();
	}
	return ;
}

void	create_outfile(std::ifstream &file, std::string path, std::string const str1, \
		std::string const str2) {

	std::ofstream	outfile;
	std::string		line;

	outfile.open(path.c_str());
	if (outfile.fail())
		error("\033[1;32mFail outfile 🪦... Well tried!\e[0m");
	while (!file.eof())
	{
		std::getline(file, line);
		if (line.find(str1) != std::string::npos)
			replace_str_in_line(line, str1, str2);
		if (!file.eof())
			outfile << line << std::endl;
	}
	outfile.close();
	return ;
}

void	second_main(char **argv, std::ifstream &file, std::string path) {

	std::string	const	str1 = argv[2];
	std::string	const	str2 = argv[3];

	put_arguments_to_string(argv, path, str1);
	file.open(argv[1]);
	create_outfile(file, path, str1, str2);
	return ;
}

int main (int argc, char **argv) {

	std::ifstream		file;
	std::string			path;

	if (argc != 4)
		error("\033[1;34mFail arguments 😶... Well tried!\e[0m");
	file.open(argv[1]);
	if (file.fail())
		error("\033[1;32mFail file 🪦... Well tried!\e[0m");
	check_file_is_empty(file);
	second_main(argv, file, path);
	file.close();
	return (0);
}
