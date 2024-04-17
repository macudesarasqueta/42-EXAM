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

/*#include <stdio.h>

int main()
{
	int i = 0;
	char str[] = "Hello world!";
	char **res = ft_split(str);

	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
