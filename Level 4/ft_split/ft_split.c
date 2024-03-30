#include <stdlib.h>

char    **ft_split(char *str)
{
	char **mem;
	int i = 0;
	int j;
	int k = 0;

	mem = (char **)malloc(sizeof(char) * 300);
	if (!mem)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		mem[k] = (char *)malloc(sizeof(char) * 3000);
		if (!mem[k])
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			mem[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		mem[k][j] = '\0';
		k++;
	}
	mem[k] = NULL;
	return (mem);
}

#include <stdio.h>

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
}
