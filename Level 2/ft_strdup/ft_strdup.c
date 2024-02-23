#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *mem;
	int	i = 0;
	int size = 0;

	while (src[i])
		i++;
	mem = (char *)malloc(sizeof(char) * (i + 1));
	if (!mem)
		return (NULL);
	while (size < i)
	{
		mem[size] = src[size];
		size++;
	}
	mem[size] = '\0';
	return (mem);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	printf("%s\n", strdup("hola"));
	printf("%s\n", ft_strdup("hola"));
	return (0);
}
