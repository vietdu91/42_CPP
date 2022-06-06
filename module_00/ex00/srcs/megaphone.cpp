#include <iostream>

int	main(int argc, char **argv) {
	int	i = 1;
	int j;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argv[i])
	{
		j = -1;
		while (argv[i][++j])
			argv[i][j] = toupper(argv[i][j]);
		std::cout << argv[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
