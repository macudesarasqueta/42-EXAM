#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[2][i])
		{
			if (argv[2][i] == argv[1][j])
				j++;
			i++;
		}
		if (argv[1][j] == '\0')
		{
			while (argv[1][k])
			{
				write(1, &argv[1][k], 1);
				k++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
