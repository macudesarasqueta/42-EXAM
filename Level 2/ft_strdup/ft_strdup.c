#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *mem;
	int len = 0;
	int i = 0;

	while (src[len])
		len++;
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	while (i < len)
	{
		mem[i] = src[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

/*#include <string.h>
#include <stdio.h>

int	main()
{
	printf("%s\n", strdup("hola como estas"));
	printf("%s\n", ft_strdup("hola como estas"));
	return (0);
}*/
