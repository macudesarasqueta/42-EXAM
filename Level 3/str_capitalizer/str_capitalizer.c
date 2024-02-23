#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if	(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == -1))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i = 1;
	while (argc > i)
	{
		str_capitalizer(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}
