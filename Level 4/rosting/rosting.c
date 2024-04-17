#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i == 0 && !is_space(str[i]))
			count++;
		if (i > 0 && !is_space(str[i]) && is_space(str[i - 1]))
			count++;
		i++;
	}
	return (count);
}

char    **ft_split(char *str)
{
	char **mem;
	int i = 0;
	int j;
	int k = 0;

	mem = (char **)malloc(sizeof(char) * count_words(str) + 1);
	if (!mem)
		return (NULL);
	while (is_space(str[i]))
		i++;
	while (str[i])
	{
		j = 0;
		mem[k] = (char *)malloc(sizeof(char) * 3000);
		if (!mem[k])
			return (NULL);
		while (!is_space(str[i]) && str[i])
			mem[k][j++] = str[i++];
		while (is_space(str[i]))
			i++;
		mem[k][j] = '\0';
		k++;
	}
	mem[k] = NULL;
	return (mem);
}

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		char **matrix;
		int i;
		int num_words;

		matrix = ft_split(argv[1]);
		num_words = count_words(argv[1]);
		if (num_words > 1)
		{
			i = 1;
			while (i < num_words)
			{
				ft_putstr(matrix[i]);
				write(1, " ", 1);
				i++;
			}
		}
		ft_putstr(matrix[0]);
	}
	write(1, "\n", 1);
	return (0);
}
