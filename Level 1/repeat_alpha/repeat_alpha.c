#include <unistd.h>

int	main(int argc, char **argv)
{
	int	rep = 0;
	int	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				rep = argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				rep = argv[1][i] - 'A';
			else
				rep = 0;
			while (rep >= 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
