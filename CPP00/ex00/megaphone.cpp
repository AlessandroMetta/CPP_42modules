#include <iostream>

int main(int argc, char **argv)
{
	int i, j;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] >= 97 && argv[i][j] <= 122)
				std::cout << (char)(argv[i][j] - 32);
			else
				std::cout << argv[i][j];
			j++;
		}
		i++;
		if (argv[i])
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
