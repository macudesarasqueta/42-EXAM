#include <unistd.h>

int	main(int argc, char **argv)
{
	int used[255] = {0};

	if (argc == 3)
	{
		int i = 0;
		while (argv[1][i])
		{
			int j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !used[(int)argv[1][i]])
				{
					write(1, &argv[1][i], 1);
					used[(int)argv[1][i]] = 1;
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
