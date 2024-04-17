#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i])
	{
		if (i == 0 && !is_space(str[i]))
			words++;
		if (i > 0 && !is_space(str[i]) && is_space(str[i - 1]))
			words++;
		i++;
	}
	return (words);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j;
	int k = 0;
	char **mem;

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
	char **mem;
	int num_words = 0;

	if (argc >= 2)
	{
		mem = ft_split(argv[1]);
		num_words = count_words(argv[1]);
		if (num_words > 1)
		{
			int i = 1;
			while (i < num_words)
			{
				ft_putstr(mem[i]);
				write(1, " ", 1);
				i++;
			}
		}
		ft_putstr(mem[0]);
	}
	write(1, "\n", 1);
	return (0);
}
