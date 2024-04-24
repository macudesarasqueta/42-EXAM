#include <unistd.h>

int	is_char_in_str(char *str, int i)
{
	int j = 0;

	while (str[j] && j < i)
	{
		if (str[j] == str[i])
			return (1);
		j++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !is_char_in_str(argv[1], i))
				{
					write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
