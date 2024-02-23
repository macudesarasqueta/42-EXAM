#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int end;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		end = i - 1;
		while (end >= 0)
		{
			write(1, &argv[1][end], 1);
			end--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
